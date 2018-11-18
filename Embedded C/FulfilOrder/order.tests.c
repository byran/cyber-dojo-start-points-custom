#include "order.h"
#include <unity.h>

void test_An_Order_can_be_fulfilled_if_all_items_are_in_stock(void)
{
    Order orderWithAllItemsInStock =
    {
        .items =
        {
            {
                .item = "Apples",
                .number = 5
            }
        },
        .numberOfItems = 1
    };

    bool orderFulfilled = FulfilOrder(&orderWithAllItemsInStock);

    (void)orderFulfilled;
    TEST_FAIL_MESSAGE("Need some asserts");
}
