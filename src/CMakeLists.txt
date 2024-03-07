cmake_minimum_required(VERSION 3.0)

set(target cppTemplates)
project(${target})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} /DEBUG /OPT:REF /OPT:ICF")
set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} /DEBUG /OPT:REF /OPT:ICF")

add_definitions(-D_CRT_SECURE_NO_WARNINGS)
add_definitions("-DUNICODE" "-D_UNICODE")

include_directories(../src)

file(GLOB SRC_LIST 
  "*.cpp"
)

file(GLOB HEADER_LIST
  "*.h"
  "*.hpp"
)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../bin)

add_executable(${target} 
${HEADER_LIST}
${SRC_LIST}
)