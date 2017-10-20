cmake_minimum_required(VERSION 3.9.4)

project(cpp_gtest_example)

set(HEADER_FILES
  include/factorial.hpp
)
include_directories(include)

set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(SOURCES
  ${SRC_DIR}/factorial.cpp
)

set(MAIN ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
add_executable(main ${SOURCES} ${HEADER_FILES} ${MAIN})

##
## Test Specific
##
set(TEST_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/tests)

# This adds another subdirectory, which has 'project(gtest)'.
add_subdirectory(lib/gtest-1.8.0)

enable_testing()

# Include the gtest library. gtest_SOURCE_DIR is available due to
# 'project(gtest)' above.
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_SOURCES
  ${TEST_SRC_DIR}/tests-factorial.cpp
)

add_executable(runUnitTests ${SOURCES} ${HEADER_FILES} ${TEST_SOURCES})
target_link_libraries(runUnitTests gtest gtest_main)
