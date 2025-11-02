add_library(Vector SHARED Vector.cpp)

target_link_libraries(Vector PUBLIC Number)

target_include_directories(Vector PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
