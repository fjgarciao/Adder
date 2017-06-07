cmake_minimum_required(VERSION 2.8)

project (adder)

set(INCLUDES_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include)

include_directories(${INCLUDES_DIRECTORY})

if (WIN32)
    add_definitions(-DDLL_EXPORT_SYMBOLS)
endif()

add_library(${PROJECT_NAME} source/common/${PROJECT_NAME}.cpp)
