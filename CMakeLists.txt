project(test)
find_package(googletest)

set(SOURCES ./test.cpp)

add_executable(test SOURCES)
add_target_link(gtest)
