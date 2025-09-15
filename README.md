# sosText
Version: 1.4

## 1 - Description
sosText is a basic text editor. It is released as part of the sosSuite.  
Copyright (C) 2025  Sophie Short / sosware

## 2 - Features
- Open, Edit and Save multiple text files from within a single window.
- Intuitive indicator for when a file has unsaved changes.
- Line counting/numbering.

## 3 - Known Bugs
- When saving in a directory without write access, the file shows as saved even though the file doesn't get written

## 4 - Install
### Dependencies
- Qt6

### Installation Instructions
1. Navigate to the `sosText` directory and run `cmake CMakeLists.txt` in a terminal.
2. Run `make` in the same directory.
3. Finally run the `install.sh` script as root. The program will be installed to `/usr/local/bin`.

The program can be started by running `sostext` (optionally followed by the path(s) of any files you want to open (eg. `sostext [path-to-file-1] [path-to-file-2] [path-to-file-...] [path-to-file-99]`)) in a terminal. sosText can also be added to your launcher menu and started from there.

### Uninstall
1. Delete the `sosText` directory from `/usr/local/bin/`.
2. Delete the `sostext` symbolic link from`/usr/local/bin/`
3. Remove sosText from your launcher menu if you have added it.

## 5 - Changelog (Fixed bugs)
- [1.1] [NEW] Files can be opened from the terminal.  
`sostext [path-to-file]`
- [1.2] [NEW] Can now open multiple files from the terminal by chaining inputs.  
`sostext [path-to-file-1] [path-to-file-2] [path-to-file-...] [path-to-file-99]`
- [1.3] [BUG] Tabs can now be closed.
- [1.3] [BUG] When starting a new file, or opening a file, the new tab becomes the active tab.
- [1.3] [BUG] When closing tabs that aren't the active tab, the correct tab now closes.
- [1.3] [NEW] Tab name changes colour to green to show the file has been saved successfully.
- [1.3] [NEW] Tab name changes colour to red to show unsaved changes.
- [1.4] [BUG] A new tab is no longer opened when selection `Cancel` in the open file dialog.
- [1.4] [NEW] Added line numbers.

## 6 - Licence
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.  

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.  

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
