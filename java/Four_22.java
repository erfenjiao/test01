//4.22
package org.yuan.my_project;

import java.util.*;

public class Four_22 {
	public static void main(String[] args)
	{
		Scanner cin = new Scanner(System.in);
		System.out.print("Enter string s1:");
		String s1 = cin.nextLine();
		System.out.print("Enter string s2:");
		String s2 = cin.nextLine();
		if(s1.contains(s2))
		{
			System.out.print(s2);
			System.out.print(" is a substring of ");
			System.out.print(s1);
		}
		else
		{
			System.out.print(s2);
			System.out.print(" is not a substring of ");
			System.out.print(s1);
		}
	}
}
