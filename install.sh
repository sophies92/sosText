#!/bin/sh

echo "Creating Directories..."
mkdir ./sosText/
mkdir ./sosText/resources/
mkdir ./sosText/resources/icons/
mkdir ./sosText/licence/
echo "Done!"

echo "Copying Resources..."
cp ./res/sosText_icon.svg ./sosText/resources/icons/
cp ./licence ./sosText/licence/
echo "Done!"

echo "Copying Binary..."
cp ./sostext ./sosText/
echo "Done!"

mv ./sosText /usr/local/bin/
ln -s /usr/local/bin/sosText/sostext /usr/local/bin/