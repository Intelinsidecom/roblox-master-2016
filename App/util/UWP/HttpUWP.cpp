#ifdef RBX_PLATFORM_UWP

#include "stdafx.h"
#include "util/Http.h"
#include "util/standardout.h"

#include <collection.h>
#include <ppltasks.h>
#include <wrl/client.h>

using namespace Windows::Web::Http;
using namespace Windows::Web::Http::Headers;
using namespace Windows::Storage::Streams;
using namespace Windows::Foundation;
using namespace Platform;
using namespace concurrency;

namespace RBX
{
	void Http::httpGetPostUWP(bool isPost, std::istream& dataStream, const std::string& contentType, bool compressData,
		const HttpAux::AdditionalHeaders& additionalHeaders, bool externalRequest, HttpCache::Policy cachePolicy, std::string& response)
	{
		try
		{
			HttpClient^ httpClient = ref new HttpClient();

			std::wstring userAgentW(Http::rbxUserAgent.begin(), Http::rbxUserAgent.end());
			httpClient->DefaultRequestHeaders->UserAgent->ParseAdd(ref new String(userAgentW.c_str()));

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

			auto task = create_task(httpClient->SendRequestAsync(request));
			task.wait();

			HttpResponseMessage^ httpResponse = task.get();

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

			auto contentTask = create_task(httpResponse->Content->ReadAsStringAsync());
			contentTask.wait();

			String^ responseString = contentTask.get();
			std::wstring wResponse(responseString->Data());
			response.assign(wResponse.begin(), wResponse.end());
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
