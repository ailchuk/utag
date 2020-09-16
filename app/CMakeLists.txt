cmake_minimum_required(VERSION 3.10.0 FATAL_ERROR)

project(utag LANGUAGES CXX)

add_compile_options(-std=c++17 -Wall -Werror -Wextra -Wpedantic)

add_subdirectory(src)
include_directories(src)


set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

SET(CMAKE_PREFIX_PATH "/Users/ailchuk/.brew/opt/qt/")

find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)

find_package(ZLIB REQUIRED)
include_directories( ${ZLIB_INCLUDE_DIRS} )

set(SRCS main.cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../)

add_executable(${CMAKE_PROJECT_NAME} ${SRCS} src ${ZLIB_LIBRARIES})

target_link_libraries(
    ${CMAKE_PROJECT_NAME}
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    src
    ${ZLIB_LIBRARIES} 
)