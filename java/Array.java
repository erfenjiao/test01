package org.yuan.my_project;

import java.util.*;

public class Array {
	    public static void main(String args[])  
	    {
	    	Scanner cin = new Scanner(System.in);
	    	int x;
	    	int [] numbers = new int[100];
	    	
	    	for(int i = 0 ; i < 5 ; i++)
	    	{
	    		x = cin.nextInt();
	    		numbers[i] = x;
	    	}

	    	for(int i = 0 ; i < 5 ; i++)
	    	{
	    		System.out.println(numbers[i]);
	    	}
	    }
}
