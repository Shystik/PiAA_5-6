#include <gtest/gtest.h>
#include "functions.h"

TEST (algoritmKmpTest, substringExists) { 
    EXPECT_EQ ("0,2,5,9", KMP ("ababcabcdab", "ab"));
}
 
TEST (algoritmKmpTest, substringDoesNotExist) { 
    ASSERT_EQ ("-1", KMP ("qwert", "qwerty"));
    ASSERT_EQ ("-1", KMP ("poiuytrew", "qwertyui"));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
