#include "CentralRegister.h"

#include <iostream>

using namespace std;

CentralRegister::CentralRegister(int _numero)
{
    numero = _numero;
}

CentralRegister::~CentralRegister()
{
}

int CentralRegister::getNumero()
{
    return numero;
}


Agent& CentralRegister::addAgent(Agent _agent)
{
    agents.push_back(_agent);

    for (list<list<int> >::iterator it=itemsRegister.begin(); it != itemsRegister.end(); ++it)
    {
        list<int>& entry = *it;
        entry.push_back(0);
    }

    //std::cout << agents.size();
    return agents.back();
}


void CentralRegister::removeAgent(Agent& _agent)
{
    int agentIndex = 0;
    for (list<Agent>::iterator it = agents.begin(); it != agents.end(); ++it)
    {
        Agent agent = *it;
        if (&agent == &_agent)
        {
            agents.erase(it);
            break;
        }
        agentIndex++;
    }
    
    for (list<list<int> >::iterator it=itemsRegister.begin(); it != itemsRegister.end(); ++it)
    {
        list<int> entry = *it;
        list<int>::iterator it2 = entry.begin();
        advance(it2, agentIndex); 
        entry.erase(it2);
    }
}

void CentralRegister::setItemQuantity(Agent& receiver, int itemIndex, int quantity)
{
    int agentIndex = 0;
    for (list<Agent>::iterator it = agents.begin(); it != agents.end(); ++it)
    {
        Agent& agent = *it;
        if (&agent == &receiver)
        {
            //std::cout << "Break!";
            break;
        }
        else
        {
            agentIndex++;
        }
    }

    //std::cout << agentIndex << " \n";

    int itemCounter = 0;
    for (list<list<int> >::iterator it=itemsRegister.begin(); it != itemsRegister.end(); ++it)
    {
        if (itemCounter == itemIndex)
        {
            list<int>& entry = *it;
            list<int>::iterator it2 = entry.begin();
            advance(it2, agentIndex);
            *it2 = quantity;

            break;
        }
        
        itemCounter++;
    }
}

void CentralRegister::transferItem(Agent& sender, Agent& receiver, int itemIndex, int quantity)
{
    int qntSender = getAgentItemHolding(sender, itemIndex);
    setItemQuantity(sender, itemIndex, qntSender - quantity);

    int qntReceiver = getAgentItemHolding(receiver, itemIndex);
    setItemQuantity(receiver, itemIndex, qntReceiver + quantity);
}

void CentralRegister::addNewItemType(Item item)
{
    items.push_back(item);

    int numAgents = agents.size();
    list<int> newEntry;
    newEntry.assign(numAgents,0);
    itemsRegister.push_back(newEntry);
}

void CentralRegister::removeExistingItemType(Item& item)
{
    int itemIndex = 0;
    for (list<Item>::iterator it = items.begin(); it != items.end(); ++it)
    {
        Item itemFound = *it;
        if(&item == &itemFound)
        {
            items.erase(it);
            break;
        }
        itemIndex++;
    }
    
    int itemCounter = 0;
    for (list<list<int> >::iterator it=itemsRegister.begin(); it != itemsRegister.end(); ++it)
    {
        if (itemCounter == itemIndex)
        {
            itemsRegister.erase(it);
            break;
        }
        
        itemCounter++;
    }
}

int CentralRegister::getAgentItemHolding(Agent& _agent, int itemIndex)
{
    int agentHolding = 0;

    int agentIndex = 0;
    for (list<Agent>::iterator it = agents.begin(); it != agents.end(); ++it)
    {
        Agent& agent = *it;
        if (&agent == &_agent)
        {
            break;
        }
        agentIndex++;
    }

    int itemCounter = 0;
    for (list<list<int> >::iterator it=itemsRegister.begin(); it != itemsRegister.end(); ++it)
    {
        if (itemCounter == itemIndex)
        {
            list<int> entry = *it;
            list<int>::iterator it2 = entry.begin();
            advance(it2, agentIndex);
            agentHolding = *it2;

            break;
        }
        
        itemCounter++;
    }    

    return agentHolding;
}


list<int> CentralRegister::getItemDistribution(Item& item)
{
    list<int> itemDistro;

    int itemIndex = 0;
    for (list<Item>::iterator it = items.begin(); it != items.end(); ++it)
    {
        Item itemFound = *it;
        if(&item == &itemFound)
        {
            break;
        }
        itemIndex++;
    }

    int itemCounter = 0;
    for (list<list<int> >::iterator it=itemsRegister.begin(); it != itemsRegister.end(); ++it)
    {
        if (itemCounter == itemIndex)
        {
            itemDistro = *it;
            break;
        }
        
        itemCounter++;
    }

    return itemDistro;
}


list<Item> CentralRegister::getItemsList()
{
    return items;
}

list<Agent> CentralRegister::getAgentsList()
{
    return agents;
}

Agent& CentralRegister::getAgentByPos(int pos)
{
    int count = 0;
    for (list<Agent>::iterator it = agents.begin(); it != agents.end(); ++it)
    {
        if (count == pos)
        {
            return *it;
            break;
        }
        count++;
    }
    return agents.front();
}

list<list<int> > CentralRegister::getItemsRegister()
{
    return itemsRegister;
}

int CentralRegister::getItemTotQnt(int itemIndex)
{
    list<int> itemDistro;

    int itemCounter = 0;
    for (list<list<int> >::iterator it=itemsRegister.begin(); it != itemsRegister.end(); ++it)
    {
        if (itemCounter == itemIndex)
        {
            itemDistro = *it;
            break;
        }
        
        itemCounter++;
    }

    int itemTotQnt = 0;
    for (list<int>::iterator it=itemDistro.begin(); it != itemDistro.end(); ++it)
    {
        itemTotQnt += *it;
    }

    return itemTotQnt;
}


