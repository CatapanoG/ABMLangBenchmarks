#pragma once

#include "Item.h"

#include <unordered_map> 

using namespace std;

class Agent
{
private:
    /* data */
    unordered_map<Item, int> itemsOwned;
public:
    Agent(/* args */);
    ~Agent();

    void addItemtype(Item item);
    int getItemQntOwned(Item item);
    unordered_map<Item, int> getAgentHoldingDistro();
    void sendItemQnt(Agent receiver, Item item, int qnt);
    void setItemQnt(Item item, int qnt);
};