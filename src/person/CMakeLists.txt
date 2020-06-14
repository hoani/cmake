add_library(Person STATIC person.cpp)

target_include_directories(Person
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../zodiac
)


