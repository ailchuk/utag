cmake_minimum_required(VERSION 3.10.0 FATAL_ERROR)

set(CMAKE_CXX_EXTENSIONS OFF)

link_directories("./id3lib/libprj"
                 "./id3lib/zlib/prj")

add_subdirectory(id3lib)
