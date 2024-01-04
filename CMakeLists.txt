cmake_minimum_required(VERSION 3.23 FATAL_ERROR)

project(FL_Playground VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add source files
file(GLOB_RECURSE SOURCE_FILES 
	${CMAKE_SOURCE_DIR}/src/*.cpp
)

# Add executable
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# Add include directories
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/inc)

# Add static libraries folder
file(GLOB LIB_FILES 
    ${CMAKE_SOURCE_DIR}/lib/*.lib)

target_link_libraries(${PROJECT_NAME} PUBLIC ${LIB_FILES})

# Fetch dependencies remotely
include(FetchContent)

FetchContent_Declare(
  FluxLumina
  GIT_REPOSITORY 	https://github.com/diobat/FluxLumina.git
  GIT_TAG        	release-candidate
)
FetchContent_MakeAvailable(FluxLumina)
target_link_libraries(${PROJECT_NAME} PRIVATE FluxLumina)