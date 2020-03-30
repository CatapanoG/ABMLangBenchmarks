#pragma once

#include "CentralRegister.h"

#include "Agent.h"
#include "Item.h"

#include <list>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Model
{
private:
    
    CentralRegister centralRegister;
    int time;

    void printList(list<int> _list);
    void printListOfList(list<list<int> > _list);

public:
    Model(/* args */);
    ~Model();

    void init();
    void step();

	void printItemsRegister();
};

/*

	public void step()
	{
		// nothings
		
		ArrayList<agents.Agent> agents = centralRegister.getAgentsList();
		
		for (int i = 0; i < agents.size(); i++)
		{
			int agentCash = centralRegister.getAgentItemHolding(agents.get(i), 0);
			int qntExchanged = r.nextInt(agentCash);
			int receiverAgentIndex =  r.nextInt(agents.size());
			
			centralRegister.transferItem(agents.get(i), agents.get(receiverAgentIndex), 0, qntExchanged);
		}
		
		time++;
		
		if (time % 1000 == 0)
		{
			//System.out.println(centralRegister.getItemsRegister());	
			//System.out.println(centralRegister.getItemTotQnt(0));
			//System.out.println(centralRegister.getAgentsList().size());
		}
		
	}

*/