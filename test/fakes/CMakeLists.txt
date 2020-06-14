add_library(Fakes STATIC
  zodiacFake.cpp
)

target_include_directories(Fakes
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)


target_link_libraries(Fakes PRIVATE
  Zodiac
)

