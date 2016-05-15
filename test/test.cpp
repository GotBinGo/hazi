#include <iostream>
#include <cstring>
#include <stdexcept>
#include "gtest_lite.h"

int main() 
{
    TEST(int, relacio) {

        int a, b, c = 0;
		a = 3;
		b = 5;
        
		EXPECT_TRUE(a<b);
        EXPECT_FALSE(b<a);
		EXPECT_THROW(throw std::range_error(""), std::exception);
		EXPECT_NO_THROW(a+b);
    } END
    
	return 0;
}
