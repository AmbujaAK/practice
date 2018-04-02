import java.util.ArrayList;



public class TSP{

	public static double [][] adjacencyMatrix;
	public static Town [] towns;
		public static void main(String[] args) {
		

		double start = System.currentTimeMillis();

		
		FileIO reader = new FileIO(); 
 		String[] twns = reader.load("towns.txt");

 		
		towns = new Town[twns.length]; 

 		for(int i=0; i<towns.length; i++){
 			String[]parts = twns[i].split(",");
 			towns[i] = new Town (Integer.parseInt(parts[0]), Double.parseDouble(parts[1]), Double.parseDouble(parts[2]));
 		}

 		

 		adjacencyMatrix = new double[towns.length+1][towns.length+1];
 		
 		for(int i=1; i<=towns.length;i++){
 			for(int j=1; j<=towns.length;j++){
 				adjacencyMatrix[i][j] = towns[i-1].distanceTo(towns[j-1]);
 			}
 		}


 		int runs = 12;
 		Path [] bests = new Path[runs];

 		for(int i = 0; i<runs; i++){

 		
 			Population population = new Population(adjacencyMatrix, towns, 0.05, 2000);
 					
 		
	 		while(population.since_change < 100){

	 			
	  			population.naturalSelection();
	  			
	  			population.generate();
	  		
	  			population.calcFitness();
	  		}

	  		bests[i] = population.all_time;
 		}


 		
 		Path best = bests[0];

 		for(int i=1; i<runs; i++){
 			if(bests[i].distance < best.distance){
 				best = bests[i];
 			}
 		}

 		System.out.println("\nOptimal Path: \n"+best.makeString() +"\nwith a distance of: "+best.distance);
	}
}
