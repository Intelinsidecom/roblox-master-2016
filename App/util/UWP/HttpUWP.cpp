#ifdef RBX_PLATFORM_UWP

#include "stdafx.h"
#include "util/Http.h"
#include "util/standardout.h"
#include "StringConv.h"

#include <collection.h>
#include <ppltasks.h>
#include <wrl/client.h>
#include <windows.web.http.filters.h>
#include <windows.security.cryptography.h>
#include <windows.system.threading.h>

using namespace Windows::Web::Http;
using namespace Windows::Web::Http::Filters;
using namespace Windows::Web::Http::Headers;
using namespace Windows::Storage::Streams;
using namespace Windows::Security::Cryptography;
using namespace Windows::Foundation;
using namespace Windows::System::Threading;
using namespace Platform;
using namespace concurrency;

namespace RBX
{
	static std::string toUtf8(Platform::String^ s)
	{
		if (s == nullptr || s->IsEmpty())
			return std::string();
		std::wstring ws(s->Data());
		return RBX::utf8_encode(ws);
	}

	static bool waitForTaskWithTimeout(task<void> requestTask, int timeoutMillis, const std::string& what)
	{
		if (timeoutMillis <= 0)
		{
			requestTask.wait();
			return true;
		}

		task_completion_event<void> deadline;
		TimeSpan delay;
		delay.Duration = static_cast<LONGLONG>(timeoutMillis) * 10000;

		ThreadPoolTimer^ timer = ThreadPoolTimer::CreateTimer(
			ref new TimerElapsedHandler([deadline](ThreadPoolTimer^ t) {
				try { deadline.set(); }
				catch (...) { /* timer may already have been cancelled */ }
			}),
			delay);

		try
		{
			(requestTask || task<void>(deadline)).wait();
			timer->Cancel();
		}
		catch (...)
		{
			timer->Cancel();
			throw;
		}

		if (!requestTask.is_done())
		{
			throw RBX::runtime_error("UWP HTTP: %s timed out after %d ms", what.c_str(), timeoutMillis);
		}
		return true;
	}

	static std::string contentEncodingToString(HttpContentCodingHeaderValueCollection^ encodings)
	{
		std::string result;
		if (encodings != nullptr)
		{
			for each (HttpContentCodingHeaderValue^ coding in encodings)
			{
				if (!result.empty())
					result += ", ";
				result += toUtf8(coding->ContentCoding);
			}
		}
		return result.empty() ? "<none>" : result;
	}

	void Http::httpGetPostUWP(bool isPost, std::istream& dataStream, const std::string& contentType, bool compressData,
		const HttpAux::AdditionalHeaders& additionalHeaders, bool externalRequest, HttpCache::Policy cachePolicy, std::string& response)
	{

		try
		{

			HttpBaseProtocolFilter^ filter = ref new HttpBaseProtocolFilter();
			filter->AutomaticDecompression = false;

			HttpClient^ httpClient = ref new HttpClient(filter);

			std::wstring userAgentW(Http::rbxUserAgent.begin(), Http::rbxUserAgent.end());
			httpClient->DefaultRequestHeaders->UserAgent->ParseAdd(ref new String(userAgentW.c_str()));

			httpClient->DefaultRequestHeaders->TryAppendWithoutValidation("Accept-Encoding", "identity");

			for (HttpAux::AdditionalHeaders::const_iterator it = additionalHeaders.begin(); it != additionalHeaders.end(); ++it)
			{
				std::wstring keyW(it->first.begin(), it->first.end());
				std::wstring valueW(it->second.begin(), it->second.end());
				httpClient->DefaultRequestHeaders->Append(ref new String(keyW.c_str()), ref new String(valueW.c_str()));
			}

			std::wstring urlW(Http::url.begin(), Http::url.end());
			Uri^ uri = ref new Uri(ref new String(urlW.c_str()));

			HttpRequestMessage^ request;

			if (isPost)
			{
				request = ref new HttpRequestMessage(HttpMethod::Post, uri);

				std::string postData;
				dataStream.seekg(0, std::ios::end);
				size_t length = dataStream.tellg();
				dataStream.seekg(0, std::ios::beg);
				postData.resize(length);
				dataStream.read(&postData[0], length);

				std::wstring postDataW(postData.begin(), postData.end());
				request->Content = ref new HttpStringContent(ref new String(postDataW.c_str()));
				if (!contentType.empty())
				{
					std::wstring contentTypeW(contentType.begin(), contentType.end());
					request->Content->Headers->ContentType = ref new HttpMediaTypeHeaderValue(ref new String(contentTypeW.c_str()));
				}
			}
			else
			{
				request = ref new HttpRequestMessage(HttpMethod::Get, uri);
			}

			if (doNotUseCachedResponse)
			{
				request->Headers->TryAppendWithoutValidation("Cache-Control", "no-cache, no-store");
			}


			auto requestTask = create_task(httpClient->SendRequestAsync(request));
			auto requestGuard = requestTask.then([](task<HttpResponseMessage^> responseTask) {
				try { responseTask.get(); } catch (...) { }
			});
			waitForTaskWithTimeout(requestGuard, responseTimeoutMillis, "request send");

			HttpResponseMessage^ httpResponse = requestTask.get();

			unsigned int statusCode = static_cast<unsigned int>(httpResponse->StatusCode);
			if (statusCode < 200 || statusCode > 299 || statusCode == 202)
			{
				std::string reason = "";
				if (httpResponse->ReasonPhrase != nullptr)
				{
					std::wstring wReason(httpResponse->ReasonPhrase->Data());
					reason.assign(wReason.begin(), wReason.end());
				}
				throw RBX::http_status_error(statusCode, reason);
			}


			auto contentTask = create_task(httpResponse->Content->ReadAsBufferAsync());
			auto contentGuard = contentTask.then([](task<IBuffer^> bodyTask) {
				try { bodyTask.get(); } catch (...) { }
			});
			waitForTaskWithTimeout(contentGuard, responseTimeoutMillis, "body read");

			IBuffer^ buffer = contentTask.get();
			if (buffer != nullptr && buffer->Length > 0)
			{
				Platform::Array<unsigned char>^ bytes = nullptr;
				Windows::Security::Cryptography::CryptographicBuffer::CopyToByteArray(buffer, &bytes);
				if (bytes != nullptr && bytes->Length > 0)
					response.assign(reinterpret_cast<const char*>(bytes->Data), bytes->Length);
			}
		}
		catch (const http_status_error&)
		{
			throw;
		}
		catch (Platform::Exception^ ex)
		{
			std::wstring wMsg(ex->Message->Data());
			std::string msg(wMsg.begin(), wMsg.end());
			throw RBX::runtime_error("UWP HTTP error: %s (HRESULT: 0x%08X)", msg.c_str(), ex->HResult);
		}
		catch (const std::exception&)
		{
			throw;
		}
		catch (...)
		{
			throw RBX::runtime_error("Unknown UWP HTTP error");
		}
	}
}

#endif // RBX_PLATFORM_UWP
