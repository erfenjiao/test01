//3.33
package org.yuan.my_project;

import java.util.*;

public class Three_33 {
	public static void main(String[] args)
	{
		Scanner cin = new Scanner(System.in);
		System.out.print("Enter weight and price for package 1:");
		double p1_price  = cin.nextDouble();
		double p1_weight = cin.nextDouble();
		double p1_better = p1_price/p1_weight;
		System.out.print("Enter weight and price for package 2:");
		double p2_price = cin.nextDouble();
		double p2_weight = cin.nextDouble();
		double p2_better = p2_price/p2_weight;
		if(p1_better > p2_better)
		{
			System.out.print("Package 1 has a better price.");
		}
		else
		{
			System.out.print("Package 2 has a better price.");
		}
	}
}
