cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_BUILD_TYPE "Debug")

project(scheduler-cpp)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0")

# Specify the output directory for the executable
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# include_directories(include)
# find_package(OpenSSL REQUIRED)

set(SOURCES
    src/main.cpp
    src/Task.cpp
    src/loggers.cpp
    src/constants.cpp
    src/simulators.cpp
    src/helpers.cpp
    src/Resource.cpp
    src/Scheduler.cpp
)

# add_library(sync src/synchronize.cpp)

add_executable(main ${SOURCES})

target_include_directories(main PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include)

# target_link_libraries(main PRIVATE OpenSSL::Crypto)    

