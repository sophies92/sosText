cmake_minimum_required(VERSION 3.5)

project(sosText
        VERSION 0.1
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(Qt6 REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        src/main.cpp

        src/mainWindow.cpp
        src/mainWindow.h
        src/mainWindow.ui

        src/loadDialog.cpp
        src/loadDialog.h
        src/loadDialog.ui
)

add_executable(sosText ${PROJECT_SOURCES})

target_link_libraries(
        sosText PRIVATE Qt6::Widgets
)

