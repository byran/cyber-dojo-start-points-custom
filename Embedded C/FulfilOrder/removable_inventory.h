#ifndef REMOVABLE_INVENTORY_INCLUDE
#define REMOVABLE_INVENTORY_INCLUDE

#include <stddef.h>

bool InventoryHasItem(size_t number, char const* item);
void InventoryRemoveItem(size_t number, char const* item);

#endif
