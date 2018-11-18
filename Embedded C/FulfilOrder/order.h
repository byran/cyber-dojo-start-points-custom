#ifndef ORDER_INCLUDE
#define ORDER_INCLUDE

#include <stddef.h>
#include <stdbool.h>

typedef struct
{
    unsigned int number;
    char const* item;
} OrderItem;

typedef struct
{
    OrderItem items[10];
    size_t numberOfItems;
} Order;

bool FulfilOrder(Order* order);

#endif
