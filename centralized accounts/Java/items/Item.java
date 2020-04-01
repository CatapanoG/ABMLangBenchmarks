package items;

public class Item {
	
	//
	// PROPERTIES
	//
	
	boolean			isFinancial;
	
	agents.Agent 	issuer;
	
	int 			quality;
	
	//
	// METHODS
	//
	
	public Item (boolean _isFinancial, agents.Agent _issuer, int _quality)
	{
		isFinancial = _isFinancial;
		issuer = _issuer;
		quality = _quality;
	}

}
