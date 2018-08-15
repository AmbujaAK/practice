/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigDecimal;
import java.math.RoundingMode;

/* Name of the class has to be "Main" only if the class is public. */
class circleAndDistance
{
	static class Complex{
		double x, y;
		public Complex(double x, double y){
			this.x = x;
			this.y = y;
		}
		
		public void calculate(){
			System.out.println(BigDecimal.valueOf(Math.sqrt(x*x + y*y)).setScale(2, RoundingMode.HALF_UP));
		}
	}
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int v1 = sc.nextInt();
		int r1 = sc.nextInt();
		int v2 = sc.nextInt();
		int r2 = sc.nextInt();
		int n = sc.nextInt();
		
		double theta1 = ((v1*n)%360)*(Math.PI/180);
		double theta2 = ((v2*n)%360)*(Math.PI/180);
		
		Complex c = new Complex(r2*Math.cos(theta2)-r1*Math.cos(theta1), r2*Math.sin(theta2)-r1*Math.sin(theta1));
		c.calculate();
		sc.close();
	}
}