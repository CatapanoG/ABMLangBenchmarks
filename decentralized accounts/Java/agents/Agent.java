package agents;

import java.util.HashMap;

public class Agent {
	
	//
	// PROPERTIES
	//
	
	HashMap<items.Item, Integer> itemsOwned; 
	
	//
	// CONSTRUCTOR
	//

	public Agent()
	{
		int arraySize = 10;
		
		itemsOwned = new HashMap<items.Item, Integer>(arraySize);
	}
	
	//
	// METHODS
	//
	
	public void addItemType(items.Item item)
	{
		itemsOwned.put(item, 0);
	}
		
	public int getItemQntOwned(items.Item item)
	{
		if(itemsOwned.containsKey(item))
		{
			return itemsOwned.get(item);
		}
		else
		{
			return -1;
		}
	}
	
	public HashMap<items.Item, Integer> getAgentHoldingDistro()
	{
		return itemsOwned;
	}
	
	public void sendItemQnt(agents.Agent receiver, items.Item item, int qnt)
	{
		int currQnt = itemsOwned.get(item);
		itemsOwned.replace(item, currQnt - qnt);
		
		receiver.setItemQnt(item, qnt);
	}
	
	public void setItemQnt(items.Item item, int qnt)
	{
		if(itemsOwned.containsKey(item))
		{
			int currQnt = itemsOwned.get(item);
			itemsOwned.replace(item, currQnt + qnt);
		}
		else
		{
			itemsOwned.put(item, qnt);
		}
	}
	
}
