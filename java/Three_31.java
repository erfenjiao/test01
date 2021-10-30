//3.31
package org.yuan.my_project;

import java.util.Scanner;

public class Three_31 {
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		System.out.print("Enter the exchange rate from dollars to RMB: ");
		double rate = scanner.nextDouble();
		System.out.print("Enter 0 to convert dollars to RMB and 1 vice versa: ");
		int change = scanner.nextInt();
		if(change == 0)  //美元到人民币
		{
			System.out.print("Enter the dollar amout:");
			double dollar = scanner.nextDouble();
			double rmb = rate * dollar;
			System.out.print(dollar);
			System.out.print(" is $");
			System.out.print(rmb);
		}
		else
		{
			System.out.print("Enter the rmb amout:");
			double rmb = scanner.nextDouble();
			double dollar = rmb/rate;
			System.out.print(rmb);
			System.out.print(" is $");
			System.out.print(dollar);
		}
	
		
	}

}
