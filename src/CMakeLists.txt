add_library(sample STATIC sample.cpp sample2.cpp)


add_executable(unittests ./test/main.cpp ./test/sample2.cpp)
target_link_libraries(unittests sample)

add_test(NAME unittests COMMAND unittests)
