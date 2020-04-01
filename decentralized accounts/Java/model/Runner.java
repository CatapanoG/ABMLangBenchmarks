package model;

public class Runner {
	
	public static void main(String[] args) {
		long startTime = System.currentTimeMillis();
	       
		System.out.println("Test start!");
		
		model.Model manager = new model.Model();
		manager.init();
		for (int i = 0; i < 1000; i++)
		{
			manager.step();
		}
		
		System.out.println("Test done!");
		
		long endTime = System.currentTimeMillis();
		long time = (endTime - startTime)/(long)1000.0;
        System.out.println("Total execution time: " + time + "secs."); 
	}
	
}
