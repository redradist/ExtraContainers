cmake_minimum_required(VERSION 3.16)
project(ExtraContainers)

set(CMAKE_CXX_STANDARD 11)

add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE .)