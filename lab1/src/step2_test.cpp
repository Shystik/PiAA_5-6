#include <gtest/gtest.h>
#include "functions.h"

TEST (algoritmFindPaddingTest, paddingExists) { 
    EXPECT_EQ ("0", KMP ("abab", "abab"));
    EXPECT_EQ ("3", KMP ("padding", "dingpad"));
}
 
TEST (algoritmFindPaddingTest, paddingDoesNotExist) {
    ASSERT_EQ ("-1", KMP ("abcd", "qwerty"));
    ASSERT_EQ ("-1", KMP ("abcde", "qwert"));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
