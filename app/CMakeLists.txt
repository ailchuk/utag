cmake_minimum_required(VERSION 3.10.0 FATAL_ERROR)

project(utag LANGUAGES CXX)

add_compile_options(
    -Wall
    -Wextra
    -Werror
    -Wpedantic
)

add_subdirectory(src)

include_directories(src)

#SET(CMAKE_PREFIX_PATH "/Users/ailchuk/.brew/opt/qt/") // for unit
SET(CMAKE_PREFIX_PATH "/usr/local/Cellar/qt/5.15.1")

find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)

set(SRCS main.cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../)

add_executable(${CMAKE_PROJECT_NAME} ${SRCS} src)

target_link_libraries(
    ${CMAKE_PROJECT_NAME}
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    src
    tag
)