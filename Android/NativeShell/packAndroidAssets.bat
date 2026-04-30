@echo off
setlocal EnableDelayedExpansion

set OBB_PACKAGE_NAME=com.roblox.client
set OBB_VERSION=1

set APP_DIR=%~dp0
set APP_DIR=%APP_DIR:~0,-1%

set INITIAL_DIR=%CD%

set OBB_NAME=main.%OBB_VERSION%.%OBB_PACKAGE_NAME%.obb
set OUTPUT_FOLDER=%APP_DIR%\obb
set OUTPUT_FILENAME=%OUTPUT_FOLDER%\%OBB_NAME%

set LOCAL_UP_TO_DATE=1
if not exist "%OUTPUT_FILENAME%" (
    set LOCAL_UP_TO_DATE=0
)

if %LOCAL_UP_TO_DATE%==1 (
    if not exist "%OUTPUT_FOLDER%\content" set LOCAL_UP_TO_DATE=0
    if not exist "%OUTPUT_FOLDER%\shaders" set LOCAL_UP_TO_DATE=0
    if not exist "%OUTPUT_FOLDER%\android" set LOCAL_UP_TO_DATE=0
)

if %LOCAL_UP_TO_DATE%==1 (
    echo -- Local OBB is up to date --
) else (
    echo -- Packing assets into OBB --

    if exist "%OUTPUT_FOLDER%" rmdir /S /Q "%OUTPUT_FOLDER%"
    mkdir "%OUTPUT_FOLDER%"

    echo Packing content =^> content
    xcopy /E /I /Q "%APP_DIR%\..\..\content" "%OUTPUT_FOLDER%\content"

    echo Packing shaders =^> shaders
    xcopy /E /I /Q "%APP_DIR%\..\..\shaders" "%OUTPUT_FOLDER%\shaders"

    echo Packing PlatformContent\android =^> android
    xcopy /E /I /Q "%APP_DIR%\..\..\PlatformContent\android" "%OUTPUT_FOLDER%\android"

    cd "%OUTPUT_FOLDER%"
    powershell -Command "Compress-Archive -Path * -DestinationPath '%OUTPUT_FILENAME%.zip' -Force"
    move "%OUTPUT_FILENAME%.zip" "%OUTPUT_FILENAME%"

    cd "%APP_DIR%"
    for /f "tokens=*" %%a in ('certutil -hashfile "%OUTPUT_FILENAME%" MD5 ^| findstr /v "CertUtil" ^| findstr /v "md5"') do (
        echo %%a > "%OUTPUT_FOLDER%\fingerprint.txt"
    )
)

if not exist "%APP_DIR%\assets" mkdir "%APP_DIR%\assets"
copy /Y "%OUTPUT_FILENAME%" "%APP_DIR%\assets\"
copy /Y "%OUTPUT_FOLDER%\fingerprint.txt" "%APP_DIR%\assets\"

cd %INITIAL_DIR%
endlocal