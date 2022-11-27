#include <string>
#include <vector>
#include <map>
#include <gmock/gmock.h>
#include "Tennis.hpp"

std::string Tennis::output()
{
    std::string result = "";
	if (player1Score == 0 && player2Score == 0)
		result = "Love-All";
	if (player1Score == 1 && player2Score == 0)
		result = "Fifteen-Love";
	if (player1Score == 2 && player2Score == 0)
		result = "Thirty-Love";
	if (player1Score == 3 && player2Score == 0)
		result = "Forty-Love";
	if (player1Score == 0 && player2Score == 1)
		result = "Love-Fifteen";
	if (player1Score == 0 && player2Score == 2)
		result = "Love-Thirty";
	if (player1Score == 0 && player2Score == 3)
		result = "Love-Forty";
    return result;      
}

int main(int argc, char** argv)
{
	testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}
