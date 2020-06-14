
add_library(Adder STATIC adder.cpp)

target_include_directories(Adder
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

add_subdirectory(zodiac)
add_subdirectory(person)
