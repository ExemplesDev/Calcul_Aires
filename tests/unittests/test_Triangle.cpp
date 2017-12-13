#include <iostream>
using namespace std;

#include <gtest/gtest.h>
#include <lib/Triangle.h>

class TriangleTest : public ::testing::Test {};


TEST_F(TriangleTest, test_init) {
	Triangle T1(4,5);
	EXPECT_EQ(T1.getLargeur(),4);
	EXPECT_EQ(T1.getHauteur(),5);
}

TEST_F(TriangleTest, test_aire) {
	Triangle T1(2,3);
	EXPECT_EQ(T1.aire(), 3);
}









