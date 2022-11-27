#include <vector>
#include <gmock/gmock.h>
#include "Tennis.hpp"

class TennisTest: public ::testing::Test
{
public:
    Tennis tennis;
private:
};

TEST(tennis_test, test_init)
{
    Tennis tennis;
}

TEST_F(TennisTest, test_0_0)
{
    auto result = tennis.output();
    ASSERT_EQ("Love-All", result);
}

TEST_F(TennisTest, test_1_0)
{
    tennis.addPlayer1Score(1);
    auto result = tennis.output();
    ASSERT_EQ("Fifteen-Love", result);
}

TEST_F(TennisTest, test_3_0)
{
    tennis.addPlayer1Score(2);
    ASSERT_EQ("Thirty-Love", tennis.output());
    tennis.addPlayer1Score(1);
    ASSERT_EQ("Forty-Love", tennis.output());
}

TEST_F(TennisTest, test_0_3)
{
    tennis.addPlayer2Score(1);
    ASSERT_EQ("Love-Fifteen", tennis.output());
    tennis.addPlayer2Score(1);
    ASSERT_EQ("Love-Thirty", tennis.output());
    tennis.addPlayer2Score(1);
    ASSERT_EQ("Love-Forty", tennis.output());
}

TEST_F(TennisTest, test_all)
{
    tennis.addPlayer1Score(1);
    tennis.addPlayer2Score(1);
    ASSERT_EQ("Fifteen-All", tennis.output());
    tennis.addPlayer1Score(1);
    tennis.addPlayer2Score(1);
    ASSERT_EQ("Thirty-All", tennis.output());
}