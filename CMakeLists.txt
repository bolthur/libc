
# required minimum version
cmake_minimum_required(VERSION 3.18.4)
# module path
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})
# project name and version
project(libc VERSION 0.1 LANGUAGES)

# default is static build
option(SHARED_BUILD "Build as shared library" off)

# add sub directories
add_subdirectory(libc)
add_subdirectory(libglue)
add_subdirectory(libm)
add_subdirectory(libplatform)
