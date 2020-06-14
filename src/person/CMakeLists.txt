add_library(Person STATIC person.cpp)

target_link_libraries(Person PRIVATE Zodiac)

target_include_directories(Person
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)


