/*4.23*/
package org.yuan.my_project;

import java.util.*;

public class Four_23 {
	public static void main(String[] args)
	{
		Scanner cin = new Scanner(System.in);
		//----------------------------------------------------------
		System.out.print("Enter employee's name:");                  
		String name = cin.nextLine();
		
		System.out.print("Enter number of hours worked in a week:");
		double hour = cin.nextDouble();
		
		System.out.print("Enter hourly pay rate:");
		double hour_rate = cin.nextDouble();
		
		System.out.print("Enter federal tax withholding rate:");
		double federal_tax = cin.nextDouble();
		
		System.out.print("Enter State tax withholding rate:");
		double State_tax = cin.nextDouble();
		//----------------------------------------------------------
		System.out.print("Employees Name: ");
		System.out.println(name);
		
		System.out.print("Hours worked: ");
		System.out.println(hour);
		
		System.out.print("Pay Rate: $");
		System.out.println(hour_rate);
		
		System.out.print("Cross Pay: $");
		double Cross_pay = hour*hour_rate;
		System.out.println(Cross_pay);
		//----------------------------------------------------------
		System.out.println("Deductions: ");
		
		System.out.print("    Federal withholding (");
		System.out.print(federal_tax*100);
		System.out.print("% ): $");
		System.out.println(federal_tax*Cross_pay);
		
		System.out.print("    State withholding (");
		System.out.print(State_tax*100);
		System.out.print("% ): $");
		System.out.println(State_tax*Cross_pay);
		
		System.out.print("    Total Deduction: ");
		System.out.println(federal_tax*Cross_pay+State_tax*Cross_pay);
		
		System.out.print("Net pay: $");
		System.out.println(Cross_pay-(federal_tax*Cross_pay+State_tax*Cross_pay));
	}

}
