cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME "FactoryMethod") # CUSTOMISE: your project name
set(PROJECT_VERSION 0.1.0) # CUSTOMISE: project version
set(CMAKE_CXX_STANDARD 20) # CUSTOMISE: standard
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

project(${PROJECT_NAME} VERSION ${PROJECT_VERSION})

# Include all esential directories
include_directories(
    ./../../include
)

# add all files of source folder
file(GLOB SOURCES
    ./../../include/*.hpp
	./../../src/*.cpp
)

# $source_files is a space-delimited list of filenames.
add_executable(${PROJECT_NAME} ${SOURCES})  # Specifies the executable to build.
set_target_properties(
    ${PROJECT_NAME} 
    PROPERTIES 
        OUTPUT_NAME ${PROJECT_NAME}
        SUFFIX ".bin"
)