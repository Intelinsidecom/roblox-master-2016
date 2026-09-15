#include "stdafx.h"
#include "util/Http.h"
#include "util/standardout.h"
#include "StringConv.h"

#include <windows.h>
#include <msxml6.h>
#include <wrl.h>

#include <cstring>
#include <string>
#include <vector>

namespace RBX
{
namespace WinRTHttpDetail
{
	static std::wstring s2ws(const std::string& s)
	{
		return std::wstring(s.begin(), s.end());
	}

	static std::string ws2utf8(const std::wstring& ws)
	{
		if (ws.empty())
			return std::string();
		return RBX::utf8_encode(ws);
	}

	// IXMLHTTPRequest2 completion callback. Signals a manual-reset event on
	// terminal states (OnResponseReceived / OnError). No /ZW types used.
	class HttpCallback : public IXMLHTTPRequest2Callback
	{
		volatile LONG _refCount;
		HANDLE _event;
		DWORD _status;
		std::wstring _statusText;
		std::wstring _redirectUrl;
		std::string _response;
		HRESULT _error;

	public:
		HttpCallback()
			: _refCount(1)
			, _event(NULL)
			, _status(0)
			, _error(S_OK)
		{
			_event = ::CreateEventExW(NULL, NULL, CREATE_EVENT_MANUAL_RESET, EVENT_ALL_ACCESS);
		}

		virtual ~HttpCallback()
		{
			if (_event)
				::CloseHandle(_event);
		}

		HANDLE event() const { return _event; }
		DWORD status() const { return _status; }
		const std::wstring& statusText() const { return _statusText; }
		HRESULT error() const { return _error; }

		void getResponse(std::string& into)
		{
			into.swap(_response);
		}

		bool wait(int timeoutMillis) const
		{
			if (_event == NULL)
				return false;
			DWORD timeout = (timeoutMillis <= 0) ? INFINITE : static_cast<DWORD>(timeoutMillis);
			return ::WaitForSingleObjectEx(_event, timeout, FALSE) == WAIT_OBJECT_0;
		}

		// IUnknown
		virtual HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override
		{
			if (ppvObject == NULL)
				return E_POINTER;
			*ppvObject = NULL;
			if (riid == IID_IUnknown || riid == IID_IXMLHTTPRequest2Callback)
			{
				*ppvObject = static_cast<IXMLHTTPRequest2Callback*>(this);
				AddRef();
				return S_OK;
			}
			return E_NOINTERFACE;
		}

		virtual ULONG STDMETHODCALLTYPE AddRef() override
		{
			return static_cast<ULONG>(::InterlockedIncrement(&_refCount));
		}

		virtual ULONG STDMETHODCALLTYPE Release() override
		{
			ULONG remaining = static_cast<ULONG>(::InterlockedDecrement(&_refCount));
			if (remaining == 0)
				delete this;
			return remaining;
		}

		// IXMLHTTPRequest2Callback
		virtual HRESULT STDMETHODCALLTYPE OnRedirect(IXMLHTTPRequest2* /*pXHR*/, const WCHAR* pwszRedirectUrl) override
		{
			if (pwszRedirectUrl)
				_redirectUrl.assign(pwszRedirectUrl);
			// Return S_OK to follow the redirect (matches HttpClient default).
			return S_OK;
		}

		virtual HRESULT STDMETHODCALLTYPE OnHeadersAvailable(IXMLHTTPRequest2* /*pXHR*/, DWORD dwStatus, const WCHAR* pwszStatus) override
		{
			_status = dwStatus;
			if (pwszStatus)
				_statusText.assign(pwszStatus);
			else
				_statusText.clear();
			return S_OK;
		}

		virtual HRESULT STDMETHODCALLTYPE OnDataAvailable(IXMLHTTPRequest2* /*pXHR*/, ISequentialStream* /*pResponseStream*/) override
		{
			// Final body is collected in OnResponseReceived; nothing to do here.
			return S_OK;
		}

		virtual HRESULT STDMETHODCALLTYPE OnResponseReceived(IXMLHTTPRequest2* /*pXHR*/, ISequentialStream* pResponseStream) override
		{
			_response.clear();
			if (pResponseStream)
			{
				enum { kChunkSize = 32767 };
				std::string chunk;
				chunk.resize(kChunkSize);
				for (;;)
				{
					ULONG bytesRead = 0;
					HRESULT hr = pResponseStream->Read(&chunk[0], kChunkSize, &bytesRead);
					if (FAILED(hr))
					{
						_error = hr;
						break;
					}
					if (bytesRead > 0)
						_response.append(chunk.data(), bytesRead);
					if (hr != S_OK || bytesRead < kChunkSize)
						break;
				}
			}
			if (_event)
				::SetEvent(_event);
			return S_OK;
		}

		virtual HRESULT STDMETHODCALLTYPE OnError(IXMLHTTPRequest2* /*pXHR*/, HRESULT hrError) override
		{
			_error = hrError;
			if (_event)
				::SetEvent(_event);
			return S_OK;
		}

	private:
		HttpCallback(const HttpCallback&);
		HttpCallback& operator=(const HttpCallback&);
	};

	// ISequentialStream over an in-memory POST body. Keeps the bytes alive
	// until Send + wait complete. No /ZW types used.
	class PostBodyStream : public ISequentialStream
	{
		volatile LONG _refCount;
		std::vector<char> _body;
		size_t _position;

	public:
		explicit PostBodyStream(const std::string& data)
			: _refCount(1)
			, _position(0)
		{
			_body.assign(data.begin(), data.end());
		}

		virtual HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override
		{
			if (ppvObject == NULL)
				return E_POINTER;
			*ppvObject = NULL;
			if (riid == IID_IUnknown || riid == IID_ISequentialStream)
			{
				*ppvObject = static_cast<ISequentialStream*>(this);
				AddRef();
				return S_OK;
			}
			return E_NOINTERFACE;
		}

		virtual ULONG STDMETHODCALLTYPE AddRef() override
		{
			return static_cast<ULONG>(::InterlockedIncrement(&_refCount));
		}

		virtual ULONG STDMETHODCALLTYPE Release() override
		{
			ULONG remaining = static_cast<ULONG>(::InterlockedDecrement(&_refCount));
			if (remaining == 0)
				delete this;
			return remaining;
		}

		virtual HRESULT STDMETHODCALLTYPE Read(void* pv, ULONG cb, ULONG* pcbRead) override
		{
			if (pcbRead == NULL)
				return E_POINTER;
			*pcbRead = 0;
			if (pv == NULL && cb != 0)
				return E_POINTER;
			size_t remaining = (_position < _body.size()) ? (_body.size() - _position) : 0;
			ULONG toCopy = (remaining < static_cast<size_t>(cb)) ? static_cast<ULONG>(remaining) : cb;
			if (toCopy > 0)
			{
				memcpy(pv, &_body[_position], toCopy);
				_position += toCopy;
			}
			*pcbRead = toCopy;
			return (toCopy == cb) ? S_OK : S_FALSE;
		}

		virtual HRESULT STDMETHODCALLTYPE Write(const void* /*pv*/, ULONG /*cb*/, ULONG* /*pcbWritten*/) override
		{
			return E_NOTIMPL;
		}

	private:
		PostBodyStream(const PostBodyStream&);
		PostBodyStream& operator=(const PostBodyStream&);
	};

	static void setRequestHeader(IXMLHTTPRequest2* request, const std::wstring& header, const std::wstring& value, const std::string& urlForError)
	{
		HRESULT hr = request->SetRequestHeader(header.c_str(), value.c_str());
		if (FAILED(hr))
			throw RBX::runtime_error("WinRT HTTP: failed to set header (HRESULT: 0x%08X) [%s]", hr, urlForError.c_str());
	}
} // namespace WinRTHttpDetail

	void Http::httpGetPostWinRT(bool isPost, std::istream& dataStream, const std::string& contentType, bool compressData,
		const HttpAux::AdditionalHeaders& additionalHeaders, bool externalRequest, HttpCache::Policy cachePolicy, std::string& response)
	{
		(void)compressData;
		(void)externalRequest;
		(void)cachePolicy;

		using namespace WinRTHttpDetail;
		using Microsoft::WRL::ComPtr;

		if (url.empty())
			throw RBX::runtime_error("WinRT HTTP: empty url");

		ComPtr<IXMLHTTPRequest2> request;
		{
			IXMLHTTPRequest2* rawRequest = NULL;
			HRESULT hr = ::CoCreateInstance(__uuidof(FreeThreadedXMLHTTP60), NULL, CLSCTX_INPROC_SERVER, __uuidof(IXMLHTTPRequest2), (void**)&rawRequest);
			if (FAILED(hr) || rawRequest == NULL)
				throw RBX::runtime_error("WinRT HTTP: XHR not available (HRESULT: 0x%08X) [%s]", hr, url.c_str());
			request.Attach(rawRequest);
		}

		ComPtr<HttpCallback> callback;
		{
			HttpCallback* rawCallback = new HttpCallback();
			if (rawCallback->event() == NULL)
			{
				rawCallback->Release();
				throw RBX::runtime_error("WinRT HTTP: failed to create event [%s]", url.c_str());
			}
			callback.Attach(rawCallback);
		}

		std::wstring urlW = s2ws(url);
		HRESULT hr = request->Open(isPost ? L"POST" : L"GET", urlW.c_str(), callback.Get(), NULL, NULL, NULL, NULL);
		if (FAILED(hr))
			throw RBX::runtime_error("WinRT HTTP: open failed (HRESULT: 0x%08X) [%s]", hr, url.c_str());

		std::wstring userAgentW = s2ws(Http::rbxUserAgent);
		if (!userAgentW.empty())
			setRequestHeader(request.Get(), L"User-Agent", userAgentW, url);
		setRequestHeader(request.Get(), L"Accept-Encoding", L"identity", url);

		for (HttpAux::AdditionalHeaders::const_iterator it = additionalHeaders.begin(); it != additionalHeaders.end(); ++it)
			setRequestHeader(request.Get(), s2ws(it->first), s2ws(it->second), url);

		if (doNotUseCachedResponse)
			setRequestHeader(request.Get(), L"Cache-Control", L"no-cache, no-store", url);

		ComPtr<PostBodyStream> postStream;
		ULONGLONG bodySize = 0;
		if (isPost)
		{
			std::string postData;
			dataStream.clear();
			dataStream.seekg(0, std::ios::end);
			std::streampos endPos = dataStream.tellg();
			dataStream.seekg(0, std::ios::beg);
			if (endPos > 0)
			{
				postData.resize(static_cast<size_t>(endPos));
				dataStream.read(&postData[0], static_cast<std::streamsize>(postData.size()));
				std::streamsize got = dataStream.gcount();
				if (got >= 0 && static_cast<size_t>(got) < postData.size())
					postData.resize(static_cast<size_t>(got));
			}
			else
			{
				postData.assign(std::istreambuf_iterator<char>(dataStream), std::istreambuf_iterator<char>());
			}

			if (!contentType.empty())
				setRequestHeader(request.Get(), L"Content-Type", s2ws(contentType), url);

			PostBodyStream* rawStream = new PostBodyStream(postData);
			postStream.Attach(rawStream);
			bodySize = static_cast<ULONGLONG>(postData.size());
		}

		hr = request->Send(postStream.Get(), bodySize);
		if (FAILED(hr))
			throw RBX::runtime_error("WinRT HTTP: send failed (HRESULT: 0x%08X) [%s]", hr, url.c_str());

		if (!callback->wait(responseTimeoutMillis))
		{
			request->Abort();
			throw RBX::runtime_error("WinRT HTTP: %s timed out after %d ms", "request send", responseTimeoutMillis);
		}

		hr = callback->error();
		if (FAILED(hr))
			throw RBX::runtime_error("WinRT HTTP error: (HRESULT: 0x%08X) [%s]", hr, url.c_str());

		unsigned int statusCode = static_cast<unsigned int>(callback->status());
		if (statusCode < 200 || statusCode > 299 || statusCode == 202)
		{
			std::string reason = ws2utf8(callback->statusText());
			throw RBX::http_status_error(static_cast<int>(statusCode), reason);
		}

		callback->getResponse(response);
	}
}

