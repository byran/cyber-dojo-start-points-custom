#include "route_finder.hpp"
#include <gmock/gmock.h>

using namespace ::testing;

TEST(route_finder, Life_the_universe_and_everything)
{
    ASSERT_EQ(42, find_route("South Kensington", "Sloane Square"));
}
