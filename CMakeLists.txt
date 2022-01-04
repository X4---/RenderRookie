#CMake Version
cmake_minimum_required(VERSION 3.10)


project("RenderRookie")

#包含所有的工具
set(CMAKE_MODULE_PATH  "${CMAKE_MODULE_PATH};${CMAKE_SOURCE_DIR}/Tools/CMakeLib")
include(CMakeLib)

#设置项目
CMAKELIB_PROJECT("RenderRookie")

#生成项目项目相关
add_subdirectory(Engine)