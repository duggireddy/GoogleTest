#include <iostream>
#include <gtest/gtest.h>

using namespace std;


class example
{
	public:
		int foo()
		{
			return 1;
		}
		
};


// Test_Cases//

TEST(exampleFixture, test1) 
{   example ex;
	ASSERT_EQ(1,ex.foo());
}

TEST(exampleFixture, test2)
{   
    example ex;
	ASSERT_NE(0,ex.foo());
}


