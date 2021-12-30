#CMake Version
cmake_minimum_required(VERSION 3.10)

#包含所有的工具
set(CMAKE_MODULE_PATH  "${CMAKE_MODULE_PATH};${CMAKE_SOURCE_DIR}Tools/CMakeLib")
include(CMakeLib)

#设置项目
set(PROJECT_NAME "RenderRookie")
project(${PROJECT_NAME})

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
add_subdirectory(Engine)