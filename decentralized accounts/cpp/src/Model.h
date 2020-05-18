#pragma once

#include "CentralRegister.h"

//#include "Agent.h"
//#include "Item.h"

#include <list>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Model
{
private:
    CentralRegister centralRegister{10};
    int time = 0;

    void printList(list<int> _list);
    void printListOfList(list<list<int> > _list);

public:
    //Model(/* args */);
    //~Model();

    void init();
    void step();

	void printItemsRegister();
};