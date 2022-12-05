#include <iostream>
#include <gtest/gtest.h>
#include "dummy.hpp"
#include <memory>

using namespace std;



//Test Fixture: Using the same Data Configuration for Multiple Test{#same-data-multiple-tests}.
//if we are writing more tests that operate on similar data, we can use a test fixture.
//This allows you to reuse the ssame configuration of objects for several different tests.

class testFixtureDummy : public testing::Test 
{
    public:

    testFixtureDummy(){

        mTestDummy = std::make_unique<dummy>();
    }
    ~testFixtureDummy(){}

    void SetUp()
    {

    }


    void TearDown(){

    }

 
 //unique_ptr, when this pointer is goes out of scope it will destroy and it will call delete
    std::unique_ptr<dummy> mTestDummy;


};



//Test Case

TEST_F(testFixtureDummy, dummyInt){


    std::string str {"harinath"};
    int result = mTestDummy->dummyInt(str);

    ASSERT_EQ(result, str.size());

}


