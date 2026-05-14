# roblox-master-2016
My own fork of the leaked 2016 Gametest2 Roblox Source Code, focuses on getting all projects compiling, reverse engineered and implementing new things.

## Prerequisities
- CONTRIB_PATH environment variable set and pointing in the Contribs Folder
  
- If building C++ Projects (WindowsClient, RCCService, Roblox Studio, you will need Visual Studio 2012 with Update 5, v140 or newer havent been tested yet. v140 is confirmed to compile for UWP but not with regular targets.

- For C# Ones, you will need Visual Studio 2015 with Update 3 or without.

- If building Android, you will need JDK 11, ninja on PATH, cmake installed and NDK 10e on Path and on ANDROID_NDK environment variable (Compiling the contribs needs linux or WSL and ndk 10e)

- If building for Xbox Client, you will need 2015-08 XDK release, if you know someone who has Xbox One Devkit, please contact me so i could get in touch with him on order to test if it works.

- IOS hasnt been tested yet


Some projects might not compile without extra steps or on some config. if you notice such project, please issue an report so it gets fixed.

- Note: Installer projects have "Freebloxia" naming, this is to avoid confusion and for the user to know which entries to replace if The need to customize anything exists.

- Note on UWP:
Its just an Showcase and not an full fledged alternative to WindowsClient or something like that. It has bugs and can be expanded into full client whenewer you like it.

## Contribs

The contribs come seperately and include everything prebuilt, these can be optained from here: insert links later.
