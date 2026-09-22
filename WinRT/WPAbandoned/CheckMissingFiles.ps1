# CheckMissingFiles.ps1
# Compares files in content directories with WP.vcxproj entries
# Helps identify files that exist but aren't deployed

param(
    [string]$ProjectFile = "WP.vcxproj",
    [string]$ContentRoot = "..\..\content",
    [string]$PlatformContentRoot = "..\..\PlatformContent\wp"
)

Write-Host "=== Windows Phone Missing Files Checker ===" -ForegroundColor Cyan
Write-Host ""

# Read project file
if (-not (Test-Path $ProjectFile)) {
    Write-Host "ERROR: Project file not found: $ProjectFile" -ForegroundColor Red
    exit 1
}

$projectContent = Get-Content $ProjectFile -Raw

# Function to check if file is in project
function Test-FileInProject {
    param([string]$RelativePath)
    
    # Normalize path separators
    $searchPath = $RelativePath -replace '/', '\'
    
    # Check if path appears in project file
    return $projectContent -match [regex]::Escape($searchPath)
}

# Function to scan directory and check files
function Check-Directory {
    param(
        [string]$Directory,
        [string]$BaseDir,
        [string]$Label
    )
    
    if (-not (Test-Path $Directory)) {
        Write-Host "WARNING: Directory not found: $Directory" -ForegroundColor Yellow
        return
    }
    
    Write-Host "Checking $Label..." -ForegroundColor Green
    
    $files = Get-ChildItem -Path $Directory -Recurse -File
    $missing = @()
    
    foreach ($file in $files) {
        $relativePath = $file.FullName.Substring($BaseDir.Length + 1)
        $projectPath = "..\..\" + $relativePath
        
        if (-not (Test-FileInProject $projectPath)) {
            $missing += $relativePath
        }
    }
    
    if ($missing.Count -eq 0) {
        Write-Host "  ✓ All files are in project file" -ForegroundColor Green
    } else {
        Write-Host "  ✗ Found $($missing.Count) missing file(s):" -ForegroundColor Yellow
        foreach ($file in $missing) {
            Write-Host "    - $file" -ForegroundColor Yellow
        }
    }
    
    Write-Host ""
    return $missing
}

# Get absolute paths
$scriptDir = Split-Path -Parent $MyInvocation.MyCommand.Path
$contentPath = Join-Path $scriptDir $ContentRoot | Resolve-Path
$platformContentPath = Join-Path $scriptDir $PlatformContentRoot | Resolve-Path

$allMissing = @()

# Check main content directories
$contentDirs = @(
    @{Path = Join-Path $contentPath "fonts"; Label = "Fonts"},
    @{Path = Join-Path $contentPath "music"; Label = "Music"},
    @{Path = Join-Path $contentPath "sounds"; Label = "Sounds"},
    @{Path = Join-Path $contentPath "textures"; Label = "Textures"},
    @{Path = Join-Path $contentPath "sky"; Label = "Sky"},
    @{Path = Join-Path $contentPath "scripts"; Label = "Scripts"},
    @{Path = Join-Path $contentPath "other"; Label = "Other"},
    @{Path = Join-Path $contentPath "particles"; Label = "Particles"}
)

foreach ($dir in $contentDirs) {
    $missing = Check-Directory -Directory $dir.Path -BaseDir $contentPath.Path -Label $dir.Label
    $allMissing += $missing
}

# Check platform content
$missing = Check-Directory -Directory $platformContentPath.Path -BaseDir $platformContentPath.Path -Label "Platform Content (WP)"
$allMissing += $missing

# Summary
Write-Host "=== SUMMARY ===" -ForegroundColor Cyan
if ($allMissing.Count -eq 0) {
    Write-Host "✓ All content files are properly referenced in WP.vcxproj" -ForegroundColor Green
} else {
    Write-Host "✗ Total missing files: $($allMissing.Count)" -ForegroundColor Red
    Write-Host ""
    Write-Host "To fix, add these files to WP.vcxproj with DeploymentContent=true" -ForegroundColor Yellow
}

Write-Host ""
Write-Host "Done!" -ForegroundColor Cyan
