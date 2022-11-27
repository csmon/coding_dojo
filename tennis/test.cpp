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