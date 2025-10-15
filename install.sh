#!/bin/sh

 
#   sosText - A text editor.
#   Copyright (C) 2025  Sophie Short / sosware

#   This program is free software: you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation, either version 3 of the License, or
#   (at your option) any later version.

#   This program is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU General Public License for more details.

#   You should have received a copy of the GNU General Public License
#   along with this program.  If not, see <https://www.gnu.org/licenses/>.


echo "Installing..."
echo "Removing old versions"
rm -r /usr/local/bin/sosText/
echo "Creating directories"
mkdir /usr/local/bin/sosText/
echo "Copying binary"
cp ./sostext /usr/local/bin/sosText/
ln -sf /usr/local/bin/sosText/sostext /usr/local/bin/
echo "Copying licence"
cp -r ./licence /usr/local/bin/sosText/
echo "Copying icons"
cp  ./res/sosText.svg /usr/share/icons/hicolor/scalable/apps/sosText.svg
echo "Setting up launcher"
cp  ./res/sosText.desktop /usr/share/applications/sosText.desktop
echo "Done!"