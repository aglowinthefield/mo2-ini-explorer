cmake_minimum_required(VERSION 3.30)
set(CMAKE_CXX_STANDARD 20)
include(FetchContent)

set(CMAKE_INSTALL_PREFIX "${CMAKE_CURRENT_LIST_DIR}/install")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${CMAKE_CURRENT_LIST_DIR}/../../../install/bin/plugins)

# For some reason MSVC doesn't get picked up by CLion.
set(CMAKE_GENERATOR_PLATFORM x64)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /Zi /Od")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} /Zi /O2")

if(DEFINED DEPENDENCIES_DIR)
    include(${DEPENDENCIES_DIR}/modorganizer_super/cmake_common/mo2.cmake)
else()
    include(${CMAKE_CURRENT_LIST_DIR}/cmake_common/mo2.cmake)
endif()

project(ini_explorer)
set(project_type plugin)
set(enable_warnings OFF)

add_subdirectory(src)
#add_subdirectory(tests)
#target_link_libraries(ini_explorer PRIVATE)