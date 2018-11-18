#ifndef STOCK_INCLUDE
#define STOCK_INCLUDE

#include <stddef.h>
#include <stdbool.h>

bool StockItemIsAvailable(size_t number, char const* item);
void StockRemoveItem(size_t number, char const* item);

#endif
