package model;

import java.util.ArrayList;
import java.util.Random;

import agents.Agent;

public class Model {
	
	private repositories.CentralRegister centralRegister;
	
	private Random r = new Random();
	private int time = 0;
	
	public void init()
	{
		centralRegister = new repositories.CentralRegister();
		items.Item newItem = new items.Item(false, null, 0);
		centralRegister.addNewItemType(newItem);
		
		for (int i = 0; i < 100000; i++)
		{
			agents.Agent newAgent = new agents.Agent();
			newAgent.addItemType(newItem);
			newAgent.setItemQnt(newItem, 10);
			
			centralRegister.addAgent(newAgent);
		}
		
		centralRegister.printItemDistribution(newItem);
	}
	
	public void step()
	{	
		ArrayList<agents.Agent> agents = centralRegister.getAgentsList();
		ArrayList<items.Item> items = centralRegister.getItemsList();
		
		for (int i = 0; i < agents.size(); i++)
		{
			int agentCash = agents.get(i).getItemQntOwned(items.get(0));
			int qntExchanged = r.nextInt(agentCash);
			int receiverAgentIndex =  r.nextInt(agents.size());
			
			agents.get(i).sendItemQnt(agents.get(receiverAgentIndex), items.get(0), qntExchanged);
		}
		
		time++;
		
		if (time % 1000 == 0)
		{	
			//centralRegister.printItemDistribution(items.get(0));
			//System.out.println(centralRegister.getItemTotQnt(items.get(0)));
		}
	}

}
