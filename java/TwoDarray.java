import java.io.*;
import java.util.*;

class TwoDarray{
	public static void main(String args[]){
		String students[][] = {
	    {"Ambuj Kumar","74","IT"},
	    {"Ritwic Dhibar","51","IT"},
	    {"Rahul Tiwari","49","IT"},
	    {"Manisha Mandal","43","IT"},
	    {"Deepa Kumari","80","IT"},
	    {"Choden Lama","67","IT"},
	    {"Manish Kumar","71","IT"},
	    {"Ritem Bera","21","INSTRUMENTATION"},
	    {"Shrishty Kumari","22","PRINTING"},
	    {"Aman Aggrawal","4","CONSTRUCTION"},
			{"Priyanka Nag","23","PRINTING"},
	    {"Priya Kumari","25","POWER"},
	    {"Prasant Rajput","26","POWER"},
	    {"Pratyush","28","CONSTRUCTION"},
	    {"Saurav","33","INSTRUMENTATION"}
	  };
		Scanner sc = new Scanner(System.in);
		//System.out.println(students[0][0]);

		//System.out.println(in);

		/*
		int count = 0;
		for(int i = 0; i < students.length; i++){
			for (int j = 0; j < ch.length; j++) {
				if (!input.equals(ch[j])) {
						System.out.println(students[i][0]);
						break;
				}
			}
		}*/
		String input = sc.nextLine();
		char[] chI = input.toCharArray();
		//System.out.println(input.charAt(0));

		for(int i = 0; i < students.length; i++){
			char[] chS = students[i][0].toCharArray();
			for (int j = 0; j < chI.length; j++) {
				String I = "" ;
				String S = "" ;

				I += chI[j];
				S += chS[j];
				if(I.equals(S)) {
					System.out.println("I : " + chI[j] + "\nS : " + chS[j]);
					System.out.println(students[i][0]);
				}
			}
		}
	}
}
