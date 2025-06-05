cmake_minimum_required(VERSION 3.10)

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

        src/app/app.cpp
        src/app/app.h

        src/project/project.cpp
        src/project/project.h

        src/project/file.cpp
        src/project/file.h

        src/ui/mainWindow/mainWindow.cpp
        src/ui/mainWindow/mainWindow.h
        src/ui/mainWindow/mainWindow.ui

        src/ui/filesTabs/welcomeTab/welcomeTab.cpp
        src/ui/filesTabs/welcomeTab/welcomeTab.h
        src/ui/filesTabs/welcomeTab/welcomeTab.ui

        src/ui/filesTabs/newFileTab/newFileTab.cpp
        src/ui/filesTabs/newFileTab/newFileTab.h
        src/ui/filesTabs/newFileTab/newFileTab.ui

        src/ui/openFileDialog/loadFileDialogWindow.cpp
        src/ui/openFileDialog/loadFileDialogWindow.h
        src/ui/openFileDialog/loadFileDialogWindow.ui

        src/ui/settingsWindow/settingsWindow.cpp
        src/ui/settingsWindow/settingsWindow.h
        src/ui/settingsWindow/settingsWindow.ui
)

add_executable(sosText ${PROJECT_SOURCES})

target_link_libraries(
        sosText PRIVATE Qt6::Widgets Qt6::Core
)

