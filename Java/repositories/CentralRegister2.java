package repositories;

import java.util.ArrayList;

// Centralized items register
public class CentralRegister2 {
	
	//
	// PROPERTIES
	//
	
	//private ArrayList<agents.Agent> agents 					= new ArrayList<agents.Agent>();
	//private ArrayList<items.Item> items						= new ArrayList<items.Item>();
	//private ArrayList<ArrayList<Integer>> itemsRegister 	= new ArrayList<ArrayList<Integer>>();
	
	private int numAgents									= 1000;
	private int numItemTypes								= 1;
	
	private agents.Agent[] agents							= new agents.Agent[numAgents];
	private items.Item[] items								= new items.Item[numItemTypes];
	private int[][] itemsRegister							= new int[numItemTypes][numAgents];
	
	private int agentsCount									= 0;
	private int itemsTypesCount								= 0;
	
	// 
	// CONSTRUCTOR
	//
	
	CentralRegister2 ()
	{
		
	}
	
	//
	// METHODS
	//
	
	// Add an agent. It needs both the agent's reference and agent's holdings
	public void addAgent(agents.Agent agent)
	{
		agents[agentsCount] = agent;
		
		for	(int i = 0; i < numItemTypes; i++)
		{
			itemsRegister[i][agentsCount] = 0;
		}
		
		agentsCount++;
	}
	
	// Remove an agent.
	public void removeAgent(agents.Agent agent)
	{
		int registryIndex = agents.indexOf(agent);
		agents.remove(registryIndex);
		
		int itemsCounter = 0;
		for (int i = 0; i < itemsRegister.size(); i++) {
			ArrayList<Integer> entry = itemsRegister.get(i);
			itemsCounter += entry.get(registryIndex);
			entry.remove(registryIndex);
			itemsRegister.set(i, entry);
		}
		if (itemsCounter > 0)
		{
			System.out.println("An agent that's removed still had " + itemsCounter + " contracts!!");
		}
	}

	// Transfer items (contracts or goods)
	// TODO: add check for negative quantities!!
	public void transferItem(agents.Agent sender, agents.Agent receiver, int itemIndex, int quantity)
	{
		setItemQuantity(sender, itemIndex, -quantity);
		setItemQuantity(receiver, itemIndex, quantity);
	}

	// Produce items (contracts or goods)
	public void setItemQuantity(agents.Agent receiver, int itemIndex, int quantity)
	{
		// fetch index
		int receiverindex = agents.indexOf(receiver);
		
		// fetch item holdings
		ArrayList<Integer> entry = itemsRegister.get(itemIndex);
		
		// modify quantities held
		entry.set(receiverindex, entry.get(receiverindex) + quantity);
		
		// insert the new entry
		itemsRegister.set(itemIndex, entry);
	}
	
	// Add a new item type
	public void addNewItemType(items.Item item)
	{
		items.add(item);
		
		ArrayList<Integer> newEntry = new ArrayList<Integer>(agents.size());
		for (int i = 0; i < agents.size(); i++)
		{
			newEntry.set(i, 0);
		}
		itemsRegister.add(newEntry);
	}

	// Remove an existing item type
	public void removeExistingItemType(items.Item item)
	{
		int itemIndex = items.indexOf(item);
		
		items.remove(itemIndex);
		itemsRegister.remove(itemIndex);
	}

	// Get agent's holdings
	public ArrayList<Integer> getAgentHoldingDistro(agents.Agent agent)
	{
		ArrayList<Integer> holdings = new ArrayList<Integer>(items.size());
		int agentIndex = agents.indexOf(agent);
		
		for	(int i = 0; i < items.size(); i++)
		{
			holdings.add(itemsRegister.get(i).get(agentIndex));
		}
		
		return holdings;
	}
	
	// Get agent's holding of a specific item
	public int getAgentItemHolding(agents.Agent agent, int itemIndex)
	{
		int agentIndex = agents.indexOf(agent);
		return itemsRegister.get(itemIndex).get(agentIndex); 
	}

	// Get item ownership distribution
	public ArrayList<Integer> getContractDistribution(items.Item item)
	{
		int itemIndex = items.indexOf(item);
		return itemsRegister.get(itemIndex);
	}

	// Get items list
	public ArrayList<items.Item> getItemsList()
	{
		return items;
	}

	// Get agents list
	public ArrayList<agents.Agent> getAgentsList()
	{
		return agents;
	}
	
	// Get entire register
	public ArrayList<ArrayList<Integer>> getItemsRegister()
	{
		return itemsRegister;
	}

	// Get total qnt of an item
	public int getItemTotQnt(int itemIndex)
	{
		ArrayList<Integer> distro = itemsRegister.get(itemIndex);
		int totQnt = 0;
		
		for (int i = 0; i < distro.size(); i++)
		{
			totQnt += distro.get(i);
		}
		
		return totQnt;
	}
}
