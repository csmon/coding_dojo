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

bool Tennis::isDuece()
{
	if ((player1Score == player2Score) && (player1Score >= 3))
		return true;
	return false;
}


std::string Tennis::output()
{
	if (isDuece())
		return "Deuce";

	if (player1Score == player2Score)
		return number_to_string_map[player1Score] + "-All";

	return number_to_string_map[player1Score] + "-" + number_to_string_map[player2Score];
}

int main(int argc, char** argv)
{
	testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}
