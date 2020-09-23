cmake_minimum_required(VERSION 3.18.2)

set(TARGET utag)

project(${TARGET} VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 17)

set(TAGLIB_INCLUDES
    3dparty/taglib
    3dparty/taglib/taglib
    3dparty/taglib/taglib/ape
    3dparty/taglib/taglib/asf
    3dparty/taglib/taglib/flac
    3dparty/taglib/taglib/it
    3dparty/taglib/taglib/mod
    3dparty/taglib/taglib/mp4
    3dparty/taglib/taglib/mpc
    3dparty/taglib/taglib/mpeg
    3dparty/taglib/taglib/mpeg/id3v1
    3dparty/taglib/taglib/mpeg/id3v2
    3dparty/taglib/taglib/mpeg/id3v2/frames
    3dparty/taglib/taglib/ogg
    3dparty/taglib/taglib/ogg/flac
    3dparty/taglib/taglib/ogg/opus
    3dparty/taglib/taglib/ogg/speex
    3dparty/taglib/taglib/ogg/vorbis
    3dparty/taglib/taglib/riff
    3dparty/taglib/taglib/riff/aiff
    3dparty/taglib/taglib/riff/wav
    3dparty/taglib/taglib/s3m
    3dparty/taglib/taglib/toolkit
    3dparty/taglib/taglib/trueaudio
    3dparty/taglib/taglib/wavpack
    3dparty/taglib/taglib/xm
)

add_subdirectory(3dparty)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_subdirectory(app)

target_include_directories(${TARGET} PUBLIC ${PROJECT_BINARY_DIR} ${TAGLIB_INCLUDES})
