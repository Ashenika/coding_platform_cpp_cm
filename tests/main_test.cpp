#include "gtest/gtest.h"
#include "AddStrings.h"

TEST(blaTest, test1) {
    //arrange
    //act
    //assert
    EXPECT_EQ (AddStrings::concatString ("Hello", "World"),  "HelloWorld");
    EXPECT_EQ (AddStrings::concatString ("Hellow", "World"),  "HellowWorld");
    EXPECT_EQ (AddStrings::concatString ("Hellooo", "World!!"),  "HelloooWorld!!");
}