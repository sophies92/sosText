cmake_minimum_required(VERSION 3.5)

project(sosText
        VERSION 0.1
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PREFIX_PATH /opt/qt6/6.6.0/gcc_64)
find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(PROJECT_SOURCES
        src/main.cpp

        src/ui/mainWindow/mainWindow.cpp
        src/ui/mainWindow/mainWindow.h
        src/ui/mainWindow/mainWindow.ui
        
        src/ui/openFileDialog/loadDialogWindow.cpp
        src/ui/openFileDialog/loadDialogWindow.h
        src/ui/openFileDialog/loadDialogWindow.ui

        src/project/project.cpp
        src/project/project.h
        src/project/IFile.cpp
        src/project/IFile.h
)

add_executable(sosText ${PROJECT_SOURCES})

target_link_libraries(
        sosText PRIVATE Qt6::Widgets Qt6::Core
)

