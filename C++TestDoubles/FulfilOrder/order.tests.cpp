#include "order.hpp"
#include <gmock/gmock.h>

using namespace ::testing;

namespace {

TEST(Order, An_order_cannot_be_fulfilled_if_it_has_nothing_to_take_items_from)
{
    Order emptyOrder;
    ASSERT_FALSE(emptyOrder.Fulfil(nullptr));
}

}
