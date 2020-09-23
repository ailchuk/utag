cmake_minimum_required(VERSION 3.18.2)

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

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets Core Gui REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets Core Gui REQUIRED)

set(SRCS mainwindow.ui mainwindow.cpp files.cpp sort.cpp theme.cpp buttons.cpp)

add_library(src ${SRCS})

target_link_libraries(
    src
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Gui
    tag
)