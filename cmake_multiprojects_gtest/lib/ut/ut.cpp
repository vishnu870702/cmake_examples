#include <awesomeLib/awesomeHeader.h>
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(TestsGroupName, TestForRandomNumber) {
  // Expect equality.
  EXPECT_EQ(getRandomNumber(), 42);
}