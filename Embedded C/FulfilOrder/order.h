#ifndef ORDER_INCLUDE
#define ORDER_INCLUDE

#include <stddef.h>
#include <stdbool.h>

struct OrderItem
{
	unsigned int number;
	char const* item;
}

bool FulfilOrder(OrderItem* items, size_t numberOfItems);

#endif
