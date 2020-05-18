#include "Item.h"

using namespace std;

Item::Item(/* args */)
{
}

Item::~Item()
{
}

bool Item::operator==(const Item& i) const
{
    return &i == this;
}
