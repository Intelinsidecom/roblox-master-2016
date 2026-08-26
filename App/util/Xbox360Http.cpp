/* Copyright 2006-2007 ROBLOX Corporation, All Rights Reserved */

// Xbox 360 native HTTP transport. Implements Http::httpGetPostXbox using
// blocking BSD sockets via the XDK winsock layer (winsockx.h). HTTP only;
// HTTPS is not supported by this transport and will throw.

#include "stdafx.h"

#if defined(RBX_PLATFORM_XBOX360)

#include "util/Http.h"
#include "util/HttpPlatformImpl.h"
#include "util/standardout.h"

#include <winsockx.h>

#include <vector>
#include <iterator>

namespace RBX
{

namespace
{
	const int kResponseTimeoutSeconds = 60;
	const unsigned int kMaxResponseBytes = 16 * 1024 * 1024;

	struct UrlParts
	{
		std::string host;
		std::string port;
		std::string pathAndQuery;
	};

	bool crackUrl(const std::string& url, UrlParts& parts)
	{
		static const std::string schemeSeparator = "://";
		std::string::size_type schemeEnd = url.find(schemeSeparator);
		if (schemeEnd == std::string::npos)
			return false;

		const std::string scheme = url.substr(0, schemeEnd);
		if (_stricmp(scheme.c_str(), "http") != 0)
			return false; // https unsupported by this transport

		std::string::size_type pathStart = url.find('/', schemeEnd + schemeSeparator.size());
		const std::string authority = (pathStart == std::string::npos)
			? url.substr(schemeEnd + schemeSeparator.size())
			: url.substr(schemeEnd + schemeSeparator.size(), pathStart - schemeEnd - schemeSeparator.size());
		parts.pathAndQuery = (pathStart == std::string::npos) ? "/" : url.substr(pathStart);

		std::string::size_type portSeparator = authority.rfind(':');
		if (portSeparator != std::string::npos && authority.find(']') == std::string::npos)
		{
			parts.host = authority.substr(0, portSeparator);
			parts.port = authority.substr(portSeparator + 1);
		}
		else
		{
			parts.host = authority;
			parts.port = "80";
		}
		return !parts.host.empty();
	}

	bool sendAll(SOCKET sock, const char* buffer, int length)
	{
		int sent = 0;
		while (sent < length)
		{
			const int chunk = send(sock, buffer + sent, length - sent, 0);
			if (chunk <= 0 || chunk == SOCKET_ERROR)
				return false;
			sent += chunk;
		}
		return true;
	}

	bool waitReadable(SOCKET sock, int timeoutSeconds)
	{
		fd_set readSet;
		FD_ZERO(&readSet);
		FD_SET(sock, &readSet);
		timeval timeout;
		timeout.tv_sec = timeoutSeconds;
		timeout.tv_usec = 0;
		return select(sock + 1, &readSet, NULL, NULL, &timeout) > 0;
	}
} // namespace

void Http::httpGetPostXbox(bool isPost, std::istream& dataStream, const std::string& contentType,
	bool compressData, const HttpAux::AdditionalHeaders& additionalHeaders, bool externalRequest,
	HttpCache::Policy cachePolicy, std::string& response)
{
	UrlParts parts;
	if (!crackUrl(url, parts))
		throw http_status_error(0, std::string("Xbox 360 HTTP transport cannot handle URL: ") + url);

	XNDNS* pxndns = NULL;
	if (XNetDnsLookup(parts.host.c_str(), NULL, &pxndns) != 0 || !pxndns)
		throw http_status_error(0, std::string("DNS lookup failed to start: ") + parts.host);
	if (pxndns->iStatus != 0 || pxndns->cina == 0)
	{
		XNetDnsRelease(pxndns);
		throw http_status_error(0, std::string("DNS resolution failed: ") + parts.host);
	}

	SOCKET sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (sock == INVALID_SOCKET)
		throw http_status_error(0, std::string("socket() failed for: ") + parts.host);

	sockaddr_in address;
	memset(&address, 0, sizeof(address));
	address.sin_family = AF_INET;
	address.sin_port = htons(static_cast<unsigned short>(atoi(parts.port.c_str())));
	address.sin_addr.s_addr = pxndns->aina[0].S_un.S_addr;
	XNetDnsRelease(pxndns);

	if (connect(sock, reinterpret_cast<sockaddr*>(&address), sizeof(address)) != 0)
	{
		closesocket(sock);
		throw http_status_error(0, std::string("connect failed: ") + parts.host);
	}

	std::vector<char> body;
	if (isPost)
	{
		body.assign(std::istreambuf_iterator<char>(dataStream), std::istreambuf_iterator<char>());
	}

	std::string request;
	request += isPost ? "POST " : "GET ";
	request += parts.pathAndQuery;
	request += " HTTP/1.1\r\n";
	request += "Host: ";
	request += parts.host;
	request += "\r\n";
	request += "Connection: close\r\n";
	request += "User-Agent: ";
	request += rbxUserAgent;
	request += "\r\n";
	if (isPost && !contentType.empty())
	{
		request += "Content-Type: ";
		request += contentType;
		request += "\r\n";
	}
	for (HttpAux::AdditionalHeaders::const_iterator it = additionalHeaders.begin();
		it != additionalHeaders.end(); ++it)
	{
		request += it->first;
		request += ": ";
		request += it->second;
		request += "\r\n";
	}
	if (isPost)
	{
		char contentLength[32];
		sprintf(contentLength, "%u", static_cast<unsigned int>(body.size()));
		request += "Content-Length: ";
		request += contentLength;
		request += "\r\n";
	}
	request += "\r\n";

	bool delivered = sendAll(sock, request.data(), static_cast<int>(request.size()));
	if (delivered && isPost && !body.empty())
		delivered = sendAll(sock, &body[0], static_cast<int>(body.size()));

	if (!delivered)
	{
		closesocket(sock);
		throw http_status_error(0, std::string("send failed: ") + url);
	}

	std::string raw;
	raw.reserve(64 * 1024);
	while (raw.size() < kMaxResponseBytes)
	{
		if (!waitReadable(sock, kResponseTimeoutSeconds))
			break;
		char chunk[16 * 1024];
		const int received = recv(sock, chunk, sizeof(chunk), 0);
		if (received <= 0 || received == SOCKET_ERROR)
			break;
		raw.append(chunk, received);
	}
	closesocket(sock);

	const std::string::size_type headerEnd = raw.find("\r\n\r\n");
	if (headerEnd == std::string::npos)
		throw http_status_error(0, std::string("Malformed HTTP response from: ") + url);

	response = raw.substr(headerEnd + 4);

	int statusCode = 0;
	{
		const std::string headerBlock = raw.substr(0, headerEnd);
		const std::string::size_type space = headerBlock.find(' ');
		if (space != std::string::npos)
			statusCode = atoi(headerBlock.c_str() + space + 1);
	}

	if (statusCode / 100 == 2)
		return;

	const size_t messageSize = response.size() > 512 ? 512 : response.size();
	throw http_status_error(statusCode, response.substr(0, messageSize));
}

} // namespace RBX

namespace RBX{ namespace HttpPlatformImpl {
void init(Http::CookieSharingPolicy cookieSharingPolicy) { RBXASSERT(0); }
void setCookiesForDomain(const std::string& domain, const std::string& cookies) { RBXASSERT(0); }
void getCookiesForDomain(const std::string& domain, std::string& cookies) { RBXASSERT(0); }
boost::filesystem::path getRobloxCookieJarPath() { RBXASSERT(0); return ""; }
void setProxy(const std::string& host, long port) { RBXASSERT(0); }
void perform(HttpOptions& options, std::string& response) { RBXASSERT(0); }
}}

#endif // RBX_PLATFORM_XBOX360
