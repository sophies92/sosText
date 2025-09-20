#[[ sosText - A text editor.
    Copyright (C) 2025  Sophie Short

    This program is free software: you can redistribute it and/or modify
    it under the terms of` the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
]]

cmake_minimum_required(VERSION 3.10)

project(
    sostext
    VERSION 1.5.1
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets Gui)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(PROJECT_SOURCES
    src/main.cpp

    src/mainWindow/mainWindow.h
    src/mainWindow/mainWindow.cpp
    src/mainWindow/mainWindow.ui

    src/textEditTab/textEditTab.h
    src/textEditTab/textEditTab.cpp

    src/textEditTab/textArea/textArea.h
    src/textEditTab/textArea/textArea.cpp

    src/textEditTab/lineNumberArea/lineNumberArea.h
    src/textEditTab/lineNumberArea/lineNumberArea.cpp

    src/settingsWindow/settingsWindow.h
    src/settingsWindow/settingsWindow.cpp
    src/settingsWindow/settingsWindow.ui

    src/settings/settings.h
    src/settings/settings.cpp

    src/settings/setting/setting.h
    src/settings/setting/setting.cpp

    src/aboutWindow/aboutWindow.h
    src/aboutWindow/aboutWindow.cpp
)

add_executable(sostext ${PROJECT_SOURCES})

target_link_libraries(
    sostext PRIVATE Qt6::Widgets Qt6::Core Qt6::Gui
)

