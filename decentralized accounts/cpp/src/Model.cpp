
#include "Model.h"

//#include "Agent.h"
//#include "Item.h"

#include <list>
#include <iostream>
#include <stdlib.h>

using namespace std;

/*
Model::Model()
{
}

Model::~Model()
{
}
*/

void Model::init()
{
    //Item newItem; 

    //printListOfList(centralRegister.getItemsRegister());

    //centralRegister.addNewItemType(newItem);

    //printListOfList(centralRegister.getItemsRegister());

    for (int i = 0; i < 10000; i++)
    {
        //Agent newAgent;
        //Agent& newAgentRef = centralRegister.addAgent(newAgent);
        //centralRegister.setItemQuantity(newAgentRef, 0, 10);
    }

    //printListOfList(centralRegister.getItemsRegister());
}

void Model::step()
{
    /*
    int agentsNum = centralRegister.getAgentsList().size();
    int senderNum = rand() % agentsNum;
    int receiverNum = rand() % agentsNum;

    Agent& sender = centralRegister.getAgentByPos(senderNum);
    Agent& receiver = centralRegister.getAgentByPos(receiverNum);
    centralRegister.transferItem(sender, receiver, 0, 1);
    */

    /*
    printListOfList(centralRegister.getItemsRegister());
    std::cout << "Tot qnt: " << centralRegister.getItemTotQnt(0);
    std::cout << "\nSender " << senderNum  << " item holding: " << centralRegister.getAgentItemHolding(sender, 0);
    std::cout << "\nReceiver " << receiverNum  << " item holding: " << centralRegister.getAgentItemHolding(receiver, 0);
    */
}

void Model::printList(list<int> _list)
{
    std::cout << "\n[";
    int counter = 0;
    for (list<int>::iterator it=_list.begin(); it != _list.end(); ++it)
    {
        std::cout << *it << ",";
        counter++;
    }
    if (counter != 0)
    {
        std::cout << "\b]\n";
    }
    else
    {
        std::cout << "]\n";
    }
}

void Model::printItemsRegister()
{
    //printListOfList(centralRegister.getItemsRegister());
    //std::cout << "Tot qnt: " << centralRegister.getItemTotQnt(0);
}

void Model::printListOfList(list<list<int> > _list)
{
    std::cout << "\n[";
    for (list<list<int> >::iterator it=_list.begin(); it != _list.end(); ++it)
    {
        list<int> entry = *it;
        printList(entry);
    }
    std::cout << "]\n";
}