#include "order.h"
#include "stock.h"

bool FulfilOrder(Order* order)
{
    StockItemIsAvailable(1, "Orange");
    (void)order;
    return false;
}
