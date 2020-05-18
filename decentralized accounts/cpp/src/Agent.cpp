#include "Agent.h"

#include "Item.h"
//#include "MyHashFunction.h"

#include <unordered_map> 

using namespace std;

Agent::Agent(/* args */)
{
}

Agent::~Agent()
{
}

bool Agent::operator==(const Agent& a) const
{
    return &a == this;
}

void Agent::addItemtype(Item item)
{
    //itemsOwned.insert(make_pair(item, 0));
}

int Agent::getItemQntOwned(Item item)
{
    /*
    unordered_map<Item, int>::iterator it = itemsOwned.find(item);
    if (it == itemsOwned.end())
    {
        return -1;
    }
    else
    {
        return it->second;
    }
    */
}

/*
unordered_map<Item, int> Agent::getAgentHoldingDistro()
{
    return itemsOwned;
}
*/

void Agent::sendItemQnt(Agent receiver, Item item, int qnt)
{
    //itemsOwned.at(item) -= qnt;

    //receiver.setItemQnt(item, qnt);
}

void Agent::setItemQnt(Item item, int qnt)
{
    /*
    unordered_map<Item, int>::iterator it = itemsOwned.find(item);
    if (it == itemsOwned.end())
    {
        itemsOwned.insert(make_pair(item, qnt));
    }
    else
    {
        itemsOwned.at(item) += qnt;
    }
    */
}

// HASH FUNCTION
namespace std {
  template <>
  struct hash<Item>
  {
    std::size_t operator()(const Item& k) const
    {
      return (size_t)&k;
    }
  };
}

