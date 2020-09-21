cmake_minimum_required(VERSION 3.10.0 FATAL_ERROR)

project(src LANGUAGES CXX)

add_compile_options(
    -Wall
    -Wextra
    -Werror
    -Wpedantic
)

set(TAGLIB_INCLUDES
    ../../3dparty/taglib
    ../../3dparty/taglib/taglib
    ../../3dparty/taglib/taglib/ape
    ../../3dparty/taglib/taglib/asf
    ../../3dparty/taglib/taglib/flac
    ../../3dparty/taglib/taglib/it
    ../../3dparty/taglib/taglib/mod
    ../../3dparty/taglib/taglib/mp4
    ../../3dparty/taglib/taglib/mpc
    ../../3dparty/taglib/taglib/mpeg
    ../../3dparty/taglib/taglib/mpeg/id3v1
    ../../3dparty/taglib/taglib/mpeg/id3v2
    ../../3dparty/taglib/taglib/mpeg/id3v2/frames
    ../../3dparty/taglib/taglib/ogg
    ../../3dparty/taglib/taglib/ogg/flac
    ../../3dparty/taglib/taglib/ogg/opus
    ../../3dparty/taglib/taglib/ogg/speex
    ../../3dparty/taglib/taglib/ogg/vorbis
    ../../3dparty/taglib/taglib/riff
    ../../3dparty/taglib/taglib/riff/aiff
    ../../3dparty/taglib/taglib/riff/wav
    ../../3dparty/taglib/taglib/s3m
    ../../3dparty/taglib/taglib/toolkit
    ../../3dparty/taglib/taglib/trueaudio
    ../../3dparty/taglib/taglib/wavpack
    ../../3dparty/taglib/taglib/xm
)

include_directories(${TAGLIB_INCLUDES})

#SET(CMAKE_PREFIX_PATH "/Users/ailchuk/.brew/opt/qt/") // for unit
SET(CMAKE_PREFIX_PATH "/usr/local/Cellar/qt/5.15.1")

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(SRCS mainwindow.ui mainwindow.cpp files.cpp sort.cpp theme.cpp)

add_library(src ${SRCS})

target_link_libraries(
    src
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    tag
) 
