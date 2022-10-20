FetchContent_Declare(
    sdl2
    GIT_REPOSITORY "https://github.com/libsdl-org/SDL"
    GIT_TAG "2.0.22"
    GIT_PROGRESS TRUE
)

FetchContent_MakeAvailable(sdl2)
include_directories(${SDL2_INCLUDE_DIRS})