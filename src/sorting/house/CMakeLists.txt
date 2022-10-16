add_subdirectory(attribute_fields)

set(FILES "${CMAKE_CURRENT_SOURCE_DIR}/gryffindor.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/slytherin.cpp")

target_sources("${PROJECT_NAME}" PRIVATE ${FILES})

target_include_directories("${PROJECT_NAME}" PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")
