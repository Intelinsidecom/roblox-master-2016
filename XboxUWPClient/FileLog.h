#pragma once

// File sink for on-console diagnostics.
//
// OutputDebugStringA is only surfaced when a debugger is attached, which is the
// exception rather than the rule on a dev kit, so the app mirrors everything it
// logs into <LocalFolder>\client.log.  That file is reachable from Device Portal
// (Apps -> XboxUWPClient -> File Explorer -> LocalState).
//
// Every entry point here must tolerate: any thread, calls from crash/unwind
// paths, calls before init(), and calls after the file failed to open.  Nothing
// here throws and nothing here aborts the process on failure.
namespace FileLog
{
	// Opens <directory>\<fileName> for appending.  The active log is rotated to
	// <fileName>.prev once it grows past ~1MB so a long session cannot grow
	// without bound.  Returns false when the file could not be opened, in which
	// case all further logging is a no-op.
	bool init(const wchar_t* directory, const wchar_t* fileName);

	bool enabled();

	// Directory passed to init(), or "" when init() never succeeded.
	// dirNarrow() is the same path lossily converted for narrow-path callers
	// (e.g. std::ofstream in FLog::WriteFastLogDump).
	const wchar_t* dirWide();
	const char* dirNarrow();

	// Appends "HH:MM:SS.mmm [tid] <data>" plus a newline when <data> does not
	// already end with one, and flushes so the record survives a crash.
	// Re-entrant calls from the same thread are dropped rather than deadlocking.
	void write(const char* data);

	// printf-style wrapper around write().  Truncates at 4095 characters.
	void writef(const char* fmt, ...);
}
