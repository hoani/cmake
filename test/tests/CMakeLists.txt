add_executable(Test 
  TestMain.cpp
  adderTest.cpp
)

target_link_libraries(Test PRIVATE
  Catch
  Adder
)

