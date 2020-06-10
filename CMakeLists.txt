cmake_minimum_required (VERSION 3.5)

project (CMakeTemplate)

if(MSVC)
    add_compile_options("/W4" "$<$<CONFIG:RELEASE>:/O2>")
else()
    add_compile_options("-Wall" "-Wextra" "-Werror" "$<$<CONFIG:RELEASE>:-O3>")
endif()

set(CMAKE_CXX_STANDARD 11)

set (source_dir  "${PROJECT_SOURCE_DIR}/src/")

file (GLOB source_files "${source_dir}*.cpp")

add_executable(App ${source_files} ./main.cpp)

target_include_directories(App PRIVATE ${source_dir})

add_subdirectory(test)

