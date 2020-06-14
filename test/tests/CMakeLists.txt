add_executable(Test 
  TestMain.cpp
  adderTest.cpp
  zodiacTest.cpp
)

target_link_libraries(Test PRIVATE
  Catch
  Adder
  Zodiac
)

target_compile_definitions(Test
    PRIVATE _CRT_SECURE_NO_WARNINGS
)

