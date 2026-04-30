param(
    [string]$RootPath = "."
)

# =========================
# EDIT THIS LIST ANYTIME
# =========================
$IgnoredExtensions = @(
    ".exe",
    ".lib",
    ".bin",
    ".pdb",
    ".obj",
    ".jpeg",
    ".png",
    ".gif",
    ".mp4",
    ".mp3",
    ".zip",
    ".rar",
    ".7z",
    ".pdf",
    ".vcxproj",
    ".ico",
    ".ipch",
    ".db",
    ".vcproj"
)

$pattern     = Read-Host "Enter text or regex to SEARCH for"
$replacement = Read-Host "Enter text to REPLACE it with"
$useRegex    = Read-Host "Use regex? (y/n)"

$useRegex = $useRegex -eq "y"

Write-Host "Root: $RootPath"
Write-Host "Search: $pattern"
Write-Host "Replace: $replacement"
Write-Host "Regex mode: $useRegex"
Write-Host "Ignoring extensions: $($IgnoredExtensions -join ', ')"
Write-Host ""

# Get filtered files
$files = Get-ChildItem -Path $RootPath -Recurse -File -ErrorAction SilentlyContinue |
    Where-Object {
        $IgnoredExtensions -notcontains $_.Extension.ToLower()
    }

$total = $files.Count

if ($total -eq 0) {
    Write-Host "No files found."
    return
}

$index = 0
$filesChanged = 0
$totalReplacements = 0

foreach ($file in $files) {
    $index++

    $percent = [int](($index / $total) * 100)

    Write-Progress -Activity "Replacing in files" `
                   -Status   "Processing: $index / $total" `
                   -PercentComplete $percent

    try {
        $content = Get-Content $file.FullName -Raw -ErrorAction Stop

        if ($useRegex) {
            $newContent = [regex]::Replace($content, $pattern, $replacement)
        } else {
            $escaped = [regex]::Escape($pattern)
            $newContent = [regex]::Replace($content, $escaped, $replacement)
        }

        if ($newContent -ne $content) {
            if ($useRegex) {
                $count = ([regex]::Matches($content, $pattern)).Count
            } else {
                $count = ([regex]::Matches($content, [regex]::Escape($pattern))).Count
            }

            $totalReplacements += $count
            $filesChanged++

            Set-Content -Path $file.FullName -Value $newContent -Encoding UTF8

            Write-Host "Updated: $($file.FullName) ($count replacements)"
        }
    }
    catch {
        # Ignore unreadable files silently
    }
}

Write-Progress -Activity "Replacing in files" -Completed

Write-Host ""
Write-Host "Files scanned: $total"
Write-Host "Files modified: $filesChanged"
Write-Host "Total replacements: $totalReplacements"