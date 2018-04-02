public class Town{
	
	public int id;
	public double x;
	public double y;

	
	public Town(int id, double x, double y){
		this.id = id;
		this.x = x;
		this.y = y;
	}


	public double distanceTo(Town to){

		if(this == to){
			return 0;
		}

		double fromX = x;
		double fromY = y;
		double toX = to.x;
		double toY =to.y;

		
		return (Math.sqrt(Math.pow(toX-fromX,2)+Math.pow(toY-fromY,2)));
	}

	public Town copy(){
		Town toReturn = new Town(id, x, y);
		return toReturn;
	}

}
