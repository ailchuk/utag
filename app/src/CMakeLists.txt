cmake_minimum_required(VERSION 3.10.0 FATAL_ERROR)

project(src LANGUAGES CXX)

add_compile_options(
    -Wall
    -Wextra
    -Werror
    -Wpedantic
)

include_directories(../3dparty/taglib)
link_directories(../3dparty/taglib)

#SET(CMAKE_PREFIX_PATH "/Users/ailchuk/.brew/opt/qt/") // for unit
SET(CMAKE_PREFIX_PATH "/usr/local/Cellar/qt/5.15.1")

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(SRCS mainwindow.ui mainwindow.cpp mytag.cpp file_utils.cpp)

add_library(src ${SRCS})

target_link_libraries(
    src
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
) 