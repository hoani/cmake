cmake_minimum_required (VERSION 3.5)

set (test_dir  "${PROJECT_SOURCE_DIR}/test/")

file (GLOB test_files "${test_dir}*.cpp")

add_executable(Test ${test_files} ${source_files})

target_include_directories(Test PRIVATE ${source_dir} ${test_dir})
