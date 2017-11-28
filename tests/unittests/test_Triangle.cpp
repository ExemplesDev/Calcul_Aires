#include <iostream>
using namespace std;

#include <gtest/gtest.h>
#include <lib/Triangle.h>

class TriangleTest : public ::testing::Test {};


TEST_F(TriangleTest, test_aire) {
	Triangle T1(2,3);
	EXPECT_EQ(T1.aire(), 3);
}




