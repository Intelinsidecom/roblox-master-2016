#include "FileLog.h"

#include <windows.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <atomic>
#include <mutex>

namespace
{
	// CreateFileW/MoveFileW are desktop-only in the UWP API partition, so the
	// file itself goes through the CRT (the same route settings.xml already
	// takes).  GetCurrentThreadId/GetSystemTime are app-partition safe.
	const ULONGLONG kRotateBytes = 1024ull * 1024ull;
	const size_t kMaxLine = 4096;

	FILE* g_file = NULL;
	std::mutex g_mutex;

	// thread_local: set while this thread is inside a record, so a failure path
	// that logs again (allocation hook, unwinder, exception filter) drops the
	// nested record instead of blocking on g_mutex.
	thread_local bool g_insideWrite = false;

	wchar_t g_dirWide[MAX_PATH] = L"";
	char g_dirNarrow[MAX_PATH] = "";
	std::atomic<bool> g_ready(false);

	class WriteScope
	{
	public:
		WriteScope() : entered(!g_insideWrite)
		{
			if (entered)
				g_insideWrite = true;
		}
		~WriteScope()
		{
			if (entered)
				g_insideWrite = false;
		}
		bool entered;

	private:
		WriteScope(const WriteScope&);
		WriteScope& operator=(const WriteScope&);
	};

	void closeFile()
	{
		if (g_file)
		{
			fclose(g_file);
			g_file = NULL;
		}
	}

	// Caller holds g_mutex.  Payload gets a trailing newline when it lacks one.
	// fflush per record so a crash does not lose the tail of the log.
	void appendRecord(const char* payload, size_t payloadLen)
	{
		if (!g_file || !payload || payloadLen == 0)
			return;

		SYSTEMTIME st;
		GetSystemTime(&st);

		char header[64];
		int headerLen = sprintf_s(header, sizeof(header), "%02u:%02u:%02u.%03u [%lu] ",
			(unsigned)st.wHour, (unsigned)st.wMinute,
			(unsigned)st.wSecond, (unsigned)st.wMilliseconds,
			(unsigned long)GetCurrentThreadId());
		if (headerLen > 0)
			fwrite(header, 1, (size_t)headerLen, g_file);

		fwrite(payload, 1, payloadLen, g_file);
		if (payload[payloadLen - 1] != '\n')
			fwrite("\n", 1, 1, g_file);

		fflush(g_file);
	}

	bool buildPath(wchar_t* out, size_t outCount, const wchar_t* directory, const wchar_t* fileName)
	{
		size_t dirLen = wcslen(directory);
		size_t nameLen = wcslen(fileName);
		if (dirLen == 0 || dirLen + 1 + nameLen + 1 > outCount)
			return false;

		memcpy(out, directory, dirLen * sizeof(wchar_t));
		out[dirLen] = L'\\';
		memcpy(out + dirLen + 1, fileName, (nameLen + 1) * sizeof(wchar_t));
		return true;
	}
}

bool FileLog::init(const wchar_t* directory, const wchar_t* fileName)
{
	if (!directory || !directory[0] || !fileName || !fileName[0])
		return false;

	std::lock_guard<std::mutex> lock(g_mutex);
	closeFile();
	g_ready = false;

	wchar_t path[MAX_PATH];
	if (!buildPath(path, MAX_PATH, directory, fileName))
		return false;

	// "ab" creates the file when missing and always writes at EOF.
	g_file = _wfopen(path, L"ab");
	if (!g_file)
		return false;

	_fseeki64(g_file, 0, SEEK_END);
	long long existingSize = _ftelli64(g_file);

	// Promote an oversized log out of the way instead of growing without bound.
	if (existingSize >= (long long)kRotateBytes)
	{
		closeFile();

		wchar_t prevPath[MAX_PATH];
		// +6 == L".prev" plus the terminator; bail instead of letting
		// wcscat_s raise the invalid-parameter handler.
		if (buildPath(prevPath, MAX_PATH, directory, fileName) &&
			wcslen(prevPath) + 6 <= MAX_PATH)
		{
			wcscat_s(prevPath, L".prev");
			_wremove(prevPath);
			// Failure (e.g. a portal download holding the file) just means we
			// keep appending to the existing log rather than losing it.
			_wrename(path, prevPath);
		}

		g_file = _wfopen(path, L"ab");
		if (!g_file)
			return false;
	}

	size_t dirLen = wcslen(directory);
	if (dirLen >= _countof(g_dirWide))
		dirLen = _countof(g_dirWide) - 1;
	wmemcpy(g_dirWide, directory, dirLen);
	g_dirWide[dirLen] = L'\0';

	size_t ni = 0;
	for (; ni < _countof(g_dirNarrow) - 1 && directory[ni] != L'\0'; ++ni)
		g_dirNarrow[ni] = (directory[ni] < 128) ? (char)directory[ni] : '?';
	g_dirNarrow[ni] = '\0';

	g_ready = true;

	SYSTEMTIME st;
	GetSystemTime(&st);
	char banner[192];
	int bannerLen = sprintf_s(banner, sizeof(banner),
		"===== XboxUWPClient log start %04u-%02u-%02u %02u:%02u:%02u.%03u UTC =====\n",
		(unsigned)st.wYear, (unsigned)st.wMonth, (unsigned)st.wDay,
		(unsigned)st.wHour, (unsigned)st.wMinute,
		(unsigned)st.wSecond, (unsigned)st.wMilliseconds);
	if (bannerLen > 0)
		appendRecord(banner, (size_t)bannerLen);

	return true;
}

bool FileLog::enabled()
{
	return g_ready;
}

const wchar_t* FileLog::dirWide()
{
	return g_dirWide;
}

const char* FileLog::dirNarrow()
{
	return g_dirNarrow;
}

void FileLog::write(const char* data)
{
	if (!data)
		return;

	WriteScope scope;
	if (!scope.entered)
		return;

	std::lock_guard<std::mutex> lock(g_mutex);
	appendRecord(data, strlen(data));
}

void FileLog::writef(const char* fmt, ...)
{
	if (!fmt)
		return;

	WriteScope scope;
	if (!scope.entered)
		return;

	char buffer[kMaxLine];
	va_list va;
	va_start(va, fmt);
	int len = vsnprintf(buffer, sizeof(buffer), fmt, va);
	va_end(va);
	if (len <= 0)
		return;
	if ((size_t)len >= sizeof(buffer))
		len = (int)sizeof(buffer) - 1;

	std::lock_guard<std::mutex> lock(g_mutex);
	appendRecord(buffer, (size_t)len);
}
