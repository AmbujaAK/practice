import java.io.*;
import java.util.*;

class Account {
	private static String customer_name;
	private static int account_number;
	private static String type_of_account;
	
	// Constructor
	Account(){}
	Account(String c_name,int a_num, String t_accnt){
		this.customer_name = c_name;
		this.account_number = a_num;
		this.type_of_account = t_accnt;
	}
	/*
	// current account
	public class Current_account {
		private static String cheque_book;
		private static int minimum_bal;
		private static int fine;
	}

	//saving account
	public class Saving_account {
		private static int compound_interest;
		private static int withdrawal;
	}
	*/
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);

		Account acc = new Account();
		//Account curr = new Current_account();
		//Account sav = new Saving_account();
		System.out.println("\n****ACCOUNTS****");
		
		System.out.println("\nEnter the name :");
		acc.customer_name = scan.nextLine();

		System.out.println("Enter Account number :");
		acc.account_number = scan.nextInt();

		System.out.println("Enter the type of account :");
		acc.type_of_account = scan.nextLine();

		Account acc1 = new Account(acc.customer_name,acc.account_number,acc.type_of_account);
		
	}
}
