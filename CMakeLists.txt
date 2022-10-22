cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


project(mygame)

include(${CMAKE_CURRENT_SOURCE_DIR}/external/external.cmake)
add_executable(mygame main.cpp)
target_link_libraries(mygame PRIVATE SDL2main SDL2-static)