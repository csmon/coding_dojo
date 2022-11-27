#include <string>
#include <vector>
#include <map>
#include <gmock/gmock.h>
#include "Tennis.hpp"

std::map<int, std::string> number_to_string_map = 
{
    {0, "Love"},
    {1, "Fifteen"},
    {2, "Thirty"},
    {3, "Forty"}
};

std::string Tennis::output()
{
    std::string result = "";
	if (player1Score == player2Score)
		result = number_to_string_map[player1Score] + "-All";
	else
		result = number_to_string_map[player1Score] + "-" + number_to_string_map[player2Score];
    return result;      
}

int main(int argc, char** argv)
{
	testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}
