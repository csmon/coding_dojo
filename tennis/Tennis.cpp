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
	if (player1Score == 0 && player2Score == 0)
		result = "Love-All";
	else if (player1Score == 1 && player2Score == 1)
		result = "Fifteen-All";
	else if (player1Score == 2 && player2Score == 2)
		result = "Thirty-All";
	else
		result = number_to_string_map[player1Score] + "-" + number_to_string_map[player2Score];
    return result;      
}

int main(int argc, char** argv)
{
	testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}
