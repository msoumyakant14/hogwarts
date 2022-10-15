cmake_minimum_required(VERSION "3.0.0")

# Setting library output directory
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/dist")

project("hogwarts")

add_library("${PROJECT_NAME}" "")

target_include_directories("${PROJECT_NAME}" PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")

add_subdirectory("include")
add_subdirectory("src")
