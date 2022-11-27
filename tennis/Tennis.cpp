#include <string>
#include <vector>
#include <map>
#include <gmock/gmock.h>
#include "Tennis.hpp"

std::string Tennis::output()
{
    std::string result = "";
    return result;      
}

int main(int argc, char** argv)
{
	testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}
