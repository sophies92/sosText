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


echo "Creating Directories..."
mkdir ./sosText/
mkdir ./sosText/resources/
mkdir ./sosText/resources/icons/
mkdir ./sosText/licence/
echo "Done!"

echo "Copying Resources..."
cp -r ./res/sosText_icon.svg ./sosText/resources/icons/
cp -r ./licence ./sosText/licence/
echo "Done!"

echo "Copying Binary..."
cp ./sostext ./sosText/
echo "Done!"

echo "Installing..."
rm -r /usr/local/bin/sosText/
mv -f ./sosText /usr/local/bin/
ln -sf /usr/local/bin/sosText/sostext /usr/local/bin/
chgrp users /usr/local/bin/sosText
echo "Done!"