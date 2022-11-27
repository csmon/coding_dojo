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

bool Tennis::isAdvantage()
{
	if ((player1Score >= 4) && (player1Score == player2Score + 1))
		return true;
	if ((player2Score >= 4) && (player2Score == player1Score + 1))
		return true;
	return false;
}

std::string Tennis::output()
{
	if (isAdvantage())
		return (player1Score > player2Score)?"Advantage-Player1":"Advantage-Player2";
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
