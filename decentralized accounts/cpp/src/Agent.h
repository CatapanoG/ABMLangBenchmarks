#pragma once

#include "Item.h"
//#include "MyHashFunction.h"

#include <unordered_map> 

using namespace std;

class Agent
{
private:
    //unordered_map<Item, int> itemsOwned;
    Item anItem;
    Item anotherItem;
public:
    Agent(/* args */);
    ~Agent();

    bool operator==(const Agent& a) const;

    void addItemtype(Item item);
    int getItemQntOwned(Item item);
    //unordered_map<Item, int> getAgentHoldingDistro();
    void sendItemQnt(Agent receiver, Item item, int qnt);
    void setItemQnt(Item item, int qnt);
};