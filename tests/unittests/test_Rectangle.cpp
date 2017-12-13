#include <iostream>
using namespace std;

#include <gtest/gtest.h>
#include <lib/Rectangle.h>

class RectangleTest : public ::testing::Test {};


TEST_F(RectangleTest, test_init) {
	Rectangle R(4,5);
	EXPECT_EQ(R.getLargeur(),4);
	EXPECT_EQ(R.getHauteur(),5);
}


TEST_F(RectangleTest, test_aire) {
	Rectangle R1(2,3);
	EXPECT_EQ(R1.aire(), 6);
}





