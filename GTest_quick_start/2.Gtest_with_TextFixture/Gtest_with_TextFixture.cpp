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

//Test Fixture: Using the same Data Configuration for Multiple Test{#same-data-multiple-tests}.
//if we are writing more tests that operate on similar data, we can use a test fixture.
//This allows you to reuse the ssame configuration of objects for several different tests.

class exampleFixture : public testing::Test 
{
	public:
	exampleFixture(){  //Creating constructor
		//cout << "Const"<<endl;
		testExPtr = new example(); // For each test case the new instance will create everytime
	}
	~exampleFixture() // destructor 
	{
		//cout<<"Dest"<<endl;
		delete testExPtr;
	}

	void SetUp(){
		//cout<<"setup"<<endl;
	}
	void TearDown(){

		//cout<<"TearDown"<<endl;	

	}
	
	example* testExPtr; // creating the object(to acess the class) pointer, to acess this we use "->" symbol 
};


// Test_Cases//

TEST_F(exampleFixture, test1) //For fixture we have to write"_F" to TEST
{
	ASSERT_EQ(1,testExPtr->foo());//
}

TEST_F(exampleFixture, test2)
{
	ASSERT_NE(0,testExPtr->foo());
}


