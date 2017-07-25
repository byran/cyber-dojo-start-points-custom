#ifndef ORDER_INCLUDED
#define ORDER_INCLUDED

#include "removable_inventory.hpp"

class Order
{
public:
  bool Fulfil(RemovableInventory* inventory);
};

#endif
