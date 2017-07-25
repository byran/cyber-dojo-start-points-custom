#ifndef REMOVABLE_INVENTORY_INCLUDED
#define REMOVABLE_INVENTORY_INCLUDED

#include <string>

class RemovableInventory
{
public:
  virtual ~RemovableInventory() { }
  virtual bool HasInventory(unsigned int number, std::string const& item) = 0;
  virtual void RemoveInventory(unsigned int number, std::string const& item) = 0;
};

#endif
