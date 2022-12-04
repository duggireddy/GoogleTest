#include <iostream>
#include <gtest/gtest.h>

using namespace std;



// Test_Cases//

TEST(exampleFixture, test1) //For fixture we have to write"_F" to TEST
{
	ASSERT_EQ(1,1);//
}

TEST(exampleFixture, test2)
{
	ASSERT_NE(0,1);
}


