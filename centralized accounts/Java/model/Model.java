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
		centralRegister.addNewItemType(new items.Item(false, null, 0));
		
		for (int i = 0; i < 10000; i++)
		{
			agents.Agent newAgent = new agents.Agent();
			centralRegister.addAgent(newAgent);
			centralRegister.setItemQuantity(newAgent, 0, 10);
		}
		
		System.out.println(centralRegister.getItemsRegister());
	}
	
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

}
