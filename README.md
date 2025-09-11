# sosText
Version: 1.3

## 1 - Description
sosText is a basic text editor. It is released as part of the sosSuite.  
Copyright (C) 2025  Sophie Short / sosware

## 2 - Features
- Open, Edit and Save text files

## 3 - Known Bugs

## 4 - Install
### Dependencies
- Qt6

### Installation Instructions
1. The source code can be built by running the CMake script.
2. Run the *install.sh* file. This will put all the neccessary resources into a single directory called *sosText*.
3. The *sosText* directory can be placed anywhere (we recommend */usr/local/bin/*).
4. By adding a symlink to */usr/local/bin/* the program can then be started from a terminal. This can be done by running *ln -s /usr/local/bin/sosText/sosText /usr/local/bin/sostext* in a terminal, adjusting the first path to where you have stored the *sosText* directory.
5. The program can then be ran by entering *sostext* (followed by optional paths to files to open) into a terminal, or by running *sosText* directly from the *sosText* directory. You can also add either the *sostext* or the *sosText* files to your gui launcher.

## 5 - Changelog (Fixed bugs)
- [1.1] Files can be opened from the terminal.  
*sostext [path-to-file]*
- [1.2] Can now open multiple files from the terminal by chaining inputs.  
*sostext [path-to-file-1] [path-to-file-2] [path-to-file-...] [path-to-file-99]*
- [1.3] Tabs can now be closed.

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