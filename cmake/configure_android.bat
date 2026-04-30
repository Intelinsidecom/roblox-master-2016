@echo off
setlocal enabledelayedexpansion


set ANDROID_API=15

set ANDROID_NDK=H:\android-ndk-r10e-windows-x86_64\android-ndk-r10e

set "CLIENT_DIR=%~dp0.."
set "BUILD_DIR=%CLIENT_DIR%\build"

REM Use Ninja for faster builds (better than NMake/MinGW)
set "GENERATOR=Ninja"

set "BUILD_DIRECTORIES[0]=%BUILD_DIR%\release"
set "BUILD_DIRECTORIES[1]=%BUILD_DIR%\noopt"
set "BUILD_DIRECTORIES[2]=%BUILD_DIR%\debug"


set "BUILD_MODES[0]=Release"
set "BUILD_MODES[1]=Noopt"
set "BUILD_MODES[2]=Debug"

set "COMMON_CMAKE_ARGS=-DCMAKE_TOOLCHAIN_FILE=../../cmake/Toolchains/android.toolchain.cmake"
set "COMMON_CMAKE_ARGS=%COMMON_CMAKE_ARGS% -DCMAKE_MAKE_PROGRAM=ninja"
set "COMMON_CMAKE_ARGS=%COMMON_CMAKE_ARGS% -DANDROID_TOOLCHAIN_NAME=arm-linux-androideabi-4.9"
set "COMMON_CMAKE_ARGS=%COMMON_CMAKE_ARGS% -DANDROID_NATIVE_API_LEVEL=%ANDROID_API%"
set "COMMON_CMAKE_ARGS=%COMMON_CMAKE_ARGS% -DANDROID_ABI=armeabi-v7a"
set "COMMON_CMAKE_ARGS=%COMMON_CMAKE_ARGS% -DANDROID_STL=gnustl_static"
set "COMMON_CMAKE_ARGS=%COMMON_CMAKE_ARGS% -DCONTRIB_PATH='%CONTRIB_PATH%' -Dboost_ROOT='%CONTRIB_PATH%/boost_1_56_0'"
set "COMMON_CMAKE_ARGS=%COMMON_CMAKE_ARGS% -DANDROID_NDK='%ANDROID_NDK%'"
set "COMMON_CMAKE_ARGS=%COMMON_CMAKE_ARGS% -DNEON=1 -DVFPV3=1"
set "COMMON_CMAKE_ARGS=%COMMON_CMAKE_ARGS% -DCMAKE_POLICY_VERSION_MINIMUM=3.5"

if "%CONTRIB_PATH%"=="" (
    echo ERROR: CONTRIB_PATH environment variable is not set
    echo Please set CONTRIB_PATH to point to your dependencies directory
    exit /b 1
)

echo CONTRIB_PATH=%CONTRIB_PATH%
echo ANDROID_NDK=%ANDROID_NDK%

for /L %%i in (0,1,2) do (
    call set "build_dir=%%BUILD_DIRECTORIES[%%i]%%"
    call set "build_mode=%%BUILD_MODES[%%i]%%"
    
    echo.
    echo Building for !build_mode! in !build_dir!
    
    if not exist "!build_dir!" (
        echo Creating cmake project dir at !build_dir!
        mkdir "!build_dir!"
    )
    
    pushd "!build_dir!"
    echo Running cmake in !CD!
    
    cmake %COMMON_CMAKE_ARGS% -DLIBRARY_OUTPUT_PATH_ROOT="%CD%" -DCMAKE_BUILD_TYPE=!build_mode! -G "%GENERATOR%" ../.. %*
    
    if errorlevel 1 (
        echo CMake failed. Aborting script.
        popd
        exit /b 1
    ) else (
        echo Hack in CoreScriptConverter to the build
        
        pushd "!CLIENT_DIR!\CoreScriptConverter2\tool\win32"
        call BuildCoreScripts.bat "%~dp0..\CoreScriptConverter2\tool\rsc.config"
        popd
        
        echo CoreScriptConverter completed
    )
    
    popd
    
    echo.
    echo.
    echo.
)

echo Android configuration completed successfully!
echo.
echo Next steps:
echo 1. cd ..\build\release
echo 2. ninja
echo.
echo The libroblox.so will be created in: build\release\libs\armeabi-v7a\libroblox.so
pause
