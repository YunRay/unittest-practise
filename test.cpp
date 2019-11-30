#include <gtest/gtest.h>

TEST_F(testcase1, helloworld)
{
  std::string_view strView = "hello";
  EXPECT_TRUE(test(strView), "hello");
}
