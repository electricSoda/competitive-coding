#!/bin/sh

if [ "$(uname)" = "Darwin" ]; then
    # macOS
    pbcopy < "$1"
elif command -v clip.exe >/dev/null 2>&1; then
    # Windows (Git Bash / WSL / MSYS)
    clip.exe < "$1"
else
    echo "Unsupported OS or clipboard utility not found"
    exit 1
fi
