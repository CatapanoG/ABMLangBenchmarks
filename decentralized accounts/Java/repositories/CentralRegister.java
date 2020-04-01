package repositories;

import java.util.ArrayList;
import java.util.Arrays;

// Centralized items register
public class CentralRegister {
	
	//
	// PROPERTIES
	//
	
	private ArrayList<agents.Agent> agents 					= new ArrayList<agents.Agent>();
	private ArrayList<items.Item> items						= new ArrayList<items.Item>();
	
	//
	// METHODS
	//
	
	// Add an agent. It needs both the agent's reference and agent's holdings
	public void addAgent(agents.Agent agent)
	{
		agents.add(agent);
	}
	
	// Remove an agent.
	public void removeAgent(agents.Agent agent)
	{
		int registryIndex = agents.indexOf(agent);
		agents.remove(registryIndex);
	}
	
	// Add a new item type
	public void addNewItemType(items.Item item)
	{
		items.add(item);
	}

	// Remove an existing item type
	public void removeExistingItemType(items.Item item)
	{
		int itemIndex = items.indexOf(item);
		items.remove(itemIndex);
	}

	// Get item ownership distribution
	public int[] getItemDistribution(items.Item item)
	{
		int[] distro = new int[agents.size()];
		
		for(int i = 0; i < agents.size(); i++)
		{
			distro[i] = agents.get(i).getItemQntOwned(item);
			
			if (distro[i] == -1) distro[i] = 0;
		}
		
		return distro;
	}
	
	// Print item distribution
	public void printItemDistribution(items.Item item)
	{
		int[] distro = getItemDistribution(item);
		
		System.out.println(Arrays.toString(distro));
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
	public int[][] getItemsRegister()
	{
		int[][] distro = new int[items.size()][];
		
		for(int i = 0; i < items.size(); i++)
		{
			distro[i] = getItemDistribution(items.get(i));
		}
		
		return distro;
	}
	
	// Print entire register
	public void printItemsRegister()
	{
		int[][] distro = getItemsRegister();
		
		System.out.println("[");
		for(int i = 0; i < distro.length; i++)
		{
			System.out.println(Arrays.toString(distro[i]) + ",");
		}
		System.out.println("]");
	}

	// Get total qnt of an item
	public int getItemTotQnt(items.Item item)
	{
		int[] distro = getItemDistribution(item);
		int totQnt = 0;
		
		for(int i = 0; i < distro.length; i++)
		{
			totQnt += distro[i];
		}
		
		return totQnt;
	}
}
