// WinRTFileHelper.cpp - C++/CX file for WinRT file operations
// Compile with /ZW flag to enable C++/CX extensions
// NOTE: Precompiled headers are disabled for this file in both WP and App.Phone projects

#include "WinRTFileHelper.h"
#include <windows.h> // for OutputDebugStringA
#include <ppltasks.h>
#include <string>
#include <codecvt>

// Local helper: UTF-8 to UTF-16 conversion
static std::wstring utf8_to_wide(const std::string& s)
{
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> conv;
    return conv.from_bytes(s);
}

using namespace Windows::Storage;
using namespace Windows::Storage::Streams;
using namespace Windows::Foundation;
using namespace concurrency;

namespace RBX {
namespace WinRT {

// Helper function that performs async file load and returns result as a task
static task<std::string> LoadFileAsync(const std::string& uriUtf8)
{
    // Convert UTF-8 string to Platform::String^
    std::wstring w = utf8_to_wide(uriUtf8);
    Platform::String^ suri = ref new Platform::String(w.c_str());
    Uri^ uri = ref new Uri(suri);
    
    // Chain async operations
    return create_task(StorageFile::GetFileFromApplicationUriAsync(uri))
        .then([](StorageFile^ file) {
            return file->OpenReadAsync();
        })
        .then([](IRandomAccessStream^ stream) {
            DataReader^ reader = ref new DataReader(stream);
            unsigned int streamSize = static_cast<unsigned int>(stream->Size);
            
            return create_task(reader->LoadAsync(streamSize))
                .then([reader, streamSize](unsigned int bytesLoaded) {
                    Platform::Array<unsigned char>^ bytes = ref new Platform::Array<unsigned char>(streamSize);
                    reader->ReadBytes(bytes);
                    
                    // Convert to std::string
                    std::string result;
                    result.assign(reinterpret_cast<const char*>(bytes->Data), bytes->Length);
                    return result;
                });
        });
}

bool ReadMsAppxToString(const std::string& uriUtf8, std::string& out, std::string* errMsg)
{
    // Log the file being attempted
    OutputDebugStringA(("ReadMsAppxToString: Attempting to load file: " + uriUtf8 + "\n").c_str());
    
    try
    {
        // Use Windows Event for synchronization to avoid deadlock
        HANDLE hEvent = CreateEventEx(nullptr, nullptr, 0, EVENT_ALL_ACCESS);
        if (!hEvent)
        {
            throw std::runtime_error("Failed to create synchronization event");
        }
        
        std::string result;
        std::exception_ptr exceptionPtr;
        
        // Start the async operation and use continuation to signal completion
        LoadFileAsync(uriUtf8)
            .then([&result, &exceptionPtr, hEvent](task<std::string> t) {
                try
                {
                    result = t.get();
                }
                catch (...)
                {
                    exceptionPtr = std::current_exception();
                }
                
                SetEvent(hEvent);
            });
        
        // Wait for completion using Windows Event (allows message pumping)
        DWORD waitResult = WaitForSingleObjectEx(hEvent, INFINITE, TRUE);
        CloseHandle(hEvent);
        
        if (waitResult != WAIT_OBJECT_0 && waitResult != WAIT_IO_COMPLETION)
        {
            throw std::runtime_error("Wait failed");
        }
        
        // Rethrow any exception that occurred
        if (exceptionPtr)
        {
            std::rethrow_exception(exceptionPtr);
        }
        
        out = result;
        OutputDebugStringA(("ReadMsAppxToString: Successfully loaded file: " + uriUtf8 + "\n").c_str());
        return true;
    }
    catch (const task_canceled&)
    {
        std::string errorDetail = "ReadMsAppxToString: Task was canceled";
        if (errMsg)
        {
            *errMsg = errorDetail;
        }
        OutputDebugStringA(("*** FILE NOT FOUND ***: " + uriUtf8 + " - " + errorDetail + "\n").c_str());
        return false;
    }
    catch (const std::exception& ex)
    {
        // Catch standard C++ exceptions from PPL tasks
        std::string errorDetail = std::string("ReadMsAppxToString C++ exception: ") + ex.what();
        if (errMsg)
        {
            *errMsg = errorDetail;
        }
        OutputDebugStringA(("*** FILE NOT FOUND ***: " + uriUtf8 + " - " + errorDetail + "\n").c_str());
        return false;
    }
    catch (Platform::Exception^ ex)
    {
        std::string fallbackUri;
        bool hasFallback = false;
        
        // Determine fallback path based on original path
        // If path was ms-appx:///PlatformContent/wp/..., retry with ms-appx:///Content/...
        if (uriUtf8.size() > 30 && uriUtf8.compare(0, 30, "ms-appx:///PlatformContent/wp/") == 0)
        {
            fallbackUri = "ms-appx:///Content/" + uriUtf8.substr(30);
            hasFallback = true;
        }
        // If path was ms-appx:///Content/..., retry with ms-appx:///PlatformContent/wp/...
        else if (uriUtf8.size() > 19 && uriUtf8.compare(0, 19, "ms-appx:///Content/") == 0)
        {
            fallbackUri = "ms-appx:///PlatformContent/wp/" + uriUtf8.substr(19);
            hasFallback = true;
        }
        
        if (hasFallback)
        {
            OutputDebugStringA(("ReadMsAppxToString: Trying fallback path: " + fallbackUri + "\n").c_str());
            
            try
            {
                HANDLE hFallbackEvent = CreateEventEx(nullptr, nullptr, 0, EVENT_ALL_ACCESS);
                if (!hFallbackEvent)
                {
                    throw std::runtime_error("Failed to create fallback synchronization event");
                }
                
                std::string fallbackResult;
                std::exception_ptr fallbackExceptionPtr;
                
                LoadFileAsync(fallbackUri)
                    .then([&fallbackResult, &fallbackExceptionPtr, hFallbackEvent](task<std::string> t) {
                        try
                        {
                            fallbackResult = t.get();
                        }
                        catch (...)
                        {
                            fallbackExceptionPtr = std::current_exception();
                        }
                        
                        SetEvent(hFallbackEvent);
                    });
                
                DWORD waitResult = WaitForSingleObjectEx(hFallbackEvent, INFINITE, TRUE);
                CloseHandle(hFallbackEvent);
                
                if (waitResult != WAIT_OBJECT_0 && waitResult != WAIT_IO_COMPLETION)
                {
                    throw std::runtime_error("Fallback wait failed");
                }
                
                if (fallbackExceptionPtr)
                {
                    std::rethrow_exception(fallbackExceptionPtr);
                }
                
                out = fallbackResult;
                OutputDebugStringA(("ReadMsAppxToString: Successfully loaded fallback file: " + fallbackUri + "\n").c_str());
                return true;
            }
            catch (const task_canceled&)
            {
                // Fallback task was canceled, fall through to error reporting below
            }
            catch (const std::exception&)
            {
                // Fallback also failed with C++ exception, fall through to error reporting below
            }
            catch (Platform::Exception^ exFallback)
            {
                char buf[512];
                sprintf_s(buf, sizeof(buf), 
                         "ReadMsAppxToString failed for both original (0x%08X) and fallback (0x%08X)", 
                         ex->HResult, exFallback->HResult);
                if (errMsg)
                {
                    *errMsg = buf;
                }
                OutputDebugStringA(("*** FILE NOT FOUND ***: " + uriUtf8 + " (also tried " + fallbackUri + ") - " + buf + "\n").c_str());
                return false;
            }
        }
        
        char buf[256];
        sprintf_s(buf, sizeof(buf), "ReadMsAppxToString failed: 0x%08X", ex->HResult);
        if (errMsg)
        {
            *errMsg = buf;
        }
        OutputDebugStringA(("*** FILE NOT FOUND ***: " + uriUtf8 + " - " + buf + "\n").c_str());
        return false;
    }
    catch (...)
    {
        // Catch any other exceptions
        std::string errorDetail = "ReadMsAppxToString: Unknown exception";
        if (errMsg)
        {
            *errMsg = errorDetail;
        }
        OutputDebugStringA(("*** FILE NOT FOUND ***: " + uriUtf8 + " - " + errorDetail + "\n").c_str());
        return false;
    }
}

} // namespace WinRT
} // namespace RBX
