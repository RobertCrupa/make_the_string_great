#include "makeGood.cpp"

#include <gtest/gtest.h>

// The fixture for testing the make good function.
class MakeGoodTest : public ::testing::Test {
 protected:
 
  // You can do set-up work for each test here.
  MakeGoodTest() 
  {

  }

  // You can do clean-up work that doesn't throw exceptions here.
  ~MakeGoodTest() override 
  {
     
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  // Code here will be called immediately after the constructor (right
  // before each test).
  void SetUp() override 
  {

  }
  
  // Code here will be called immediately after each test (right
  // before the destructor).
  void TearDown() override 
  {

  }

   // Class members declared here can be used by all tests in the test suite.
  
   std::string test_string;
   
};

// Tests that the function works with a single character.
TEST_F(MakeGoodTest, single_charcter) 
{
	test_string = "a";
	std::string ret = makeGood(test_string);
	EXPECT_EQ(ret, test_string) << "Single character input was mutated, returned: " << ret;
}

// Test with a string that is good.
TEST_F(MakeGoodTest, good_string)
{
        test_string = "goodString";
        std::string ret = makeGood(test_string);
        EXPECT_EQ(ret, test_string) << "good string was mutated, returned: " << ret;
}

// Test with an all bad string.
TEST_F(MakeGoodTest, all_bad_string)
{
        test_string = "abBAcC";
        std::string ret = makeGood(test_string);

	// "abBAcC" --> "aAcC" --> "cC" --> ""
        
	EXPECT_EQ(ret, "") << "all bad string was not empty, returned: " << ret;
}

// Test with a partially bad string.
TEST_F(MakeGoodTest, partial_bad_string)
{
        test_string = "banNnana";
        std::string ret = makeGood(test_string);

        // "banNnana" --> "banana"

        EXPECT_EQ(ret, "banana") << "partially bad string failed, returned: " << ret;
}

int main(int argc, char **argv) 
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
