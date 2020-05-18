#pragma once

#include "Agent.h"
//#include "Item.h"

#include <list>

using namespace std;

class CentralRegister
{
private:
    list<list<int> > itemsRegister;
    //list<Agent> agents;
    //list<Item> items;

    int numero;
public:
    CentralRegister(int _numero);
    ~CentralRegister(); 

    /*
    int getNumero();  

    Agent& addAgent(Agent _agent);
    void removeAgent(Agent& _agent);

    void setItemQuantity(Agent& receiver, int itemIndex, int quantity);
    void transferItem(Agent& sender, Agent& receiver, int itemIndex, int quantity);

    void addNewItemType(Item item);
    void removeExistingItemType(Item& item);

    int getAgentItemHolding(Agent& _agent, int itemIndex);
    list<int> getItemDistribution(Item& item);

    list<Item> getItemsList();
    list<Agent> getAgentsList();
    Agent& getAgentByPos(int pos);

    list<list<int> > getItemsRegister();
    int getItemTotQnt(int itemIndex);
    */
};

