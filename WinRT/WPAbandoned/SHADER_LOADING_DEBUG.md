# Shader Loading Debug Guide for Windows Phone 8.1

## Changes Made

### 1. Enhanced Error Logging (`ShaderManager.cpp`)
- Added detailed logging before and after file access attempts
- Improved error messages with HRESULT codes for WinRT exceptions
- Added path sanitization to remove `../` and leading slashes for WinRT

### 2. Path Detection (`VisualEngine.cpp`)
- Added logging to show asset folder and shader path
- Added fallback logic: if `assetFolder` is empty or "/", uses "shaders" directly
- Outputs shader loading path to console for debugging

## What to Check Next

### Run the app and check the output for:

1. **Asset folder path**: Look for log message `"Asset folder: '...'"` 
2. **Shader path**: Look for log message `"Shader path: '...'"` 
3. **File access attempts**: Look for `"Attempting to load shader file: ..."` messages
4. **HRESULT error codes**: If files fail to load, note the HRESULT (e.g., `0x80070002` = file not found)

### Common HRESULT Codes:
- `0x80070002` - File not found (ERROR_FILE_NOT_FOUND)
- `0x80070003` - Path not found (ERROR_PATH_NOT_FOUND)
- `0x80070005` - Access denied (ERROR_ACCESS_DENIED)
- `0x80070057` - Invalid parameter (E_INVALIDARG)

## Potential Issues & Solutions

### Issue 1: Files are in wrong location in package
**Symptom**: HRESULT 0x80070002 (file not found)

**Solution**: Check the deployed package structure. Files should be at:
```
Package Root/
  └── shaders/
      ├── shaders.json
      ├── shaders_d3d11_level_9_3.pack
      └── source/
          └── (shader source files)
```

### Issue 2: Path separator issues
**Symptom**: Files exist but still get file not found errors

**Solution**: WinRT expects backslashes `\` instead of forward slashes `/`. 
Add this to `loadShaderFile` after path sanitization:

```cpp
// Replace forward slashes with backslashes for WinRT
std::replace(fullPath.begin(), fullPath.end(), '/', '\\');
```

### Issue 3: Fast Deploy not including files
**Symptom**: Works in Release but not Debug

**To disable Fast Deploy**:
1. Open project properties
2. Go to Configuration Properties → Debugging
3. Set "Deploy" to "Yes" (not "Fast Deploy")
4. Rebuild and redeploy

**Alternative**: In `.vcxproj`, ensure all shader files have:
```xml
<DeploymentContent>true</DeploymentContent>
```

### Issue 4: Async file loading timing issue
**Symptom**: Intermittent failures or hangs

**Solution**: The `.get()` call on the async task should block properly, but if issues persist,
you can add a timeout or try synchronous file access using `StorageFile::GetFileFromApplicationUriAsync`.

## Testing Steps

1. **Clean rebuild**: Delete all build artifacts and rebuild
2. **Full deploy**: Disable fast deploy and do a full deployment
3. **Check logs**: Enable FLog::Graphics logging to see all messages
4. **Verify package**: After deployment, check if files are in the package using Device Portal or file explorer

## Alternative Approach: Embedded Resources

If file loading continues to fail, consider embedding shaders as resources:

1. Add shader files as `<FxCompile>` items in the project
2. Load them using `Windows::ApplicationModel::Package::Current->InstalledLocation`
3. Or embed them directly in the executable as byte arrays

## Contact Points

If the issue persists after trying these solutions:
- Check the Output window for detailed error messages
- Use the Visual Studio debugger to break on the exception
- Examine `ex->Message` in the catch block for more details
