# Set compilers
SET(CMAKE_CXX_COMPILER /usr/bin/c++)

project(first_project CXX) # Mandatory. 
cmake_minimum_required(VERSION 3.1) # Mandatory. 

# C++ version = 11
set(CMAKE_CXX_STANDARD 11)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# Set additional flags.
set(CMAKE_CXX_FLAGS "-Wall -Wextra") 
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0") 
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# tell cmake to output binaries here: 
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib) 

# tell cmake where to look for *.h files 
include_directories(${PROJECT_SOURCE_DIR}/src)

#
# files
#

# create libraries 
add_library(model src/Model.cpp) 
add_library(centralRegister src/Centralregister.cpp) 
add_library(agent src/Agent.cpp) 
add_library(item src/Item.cpp) 

# add executable main
add_executable(main src/AAAMAIN.cpp)

# tell the linker to bind these objects together 
target_link_libraries(main model centralRegister agent item)
#target_link_libraries(main centralRegister)