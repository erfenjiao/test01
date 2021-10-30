package org.yuan.my_project;

import java.util.*;

public class Classes_2_10_3{
	public static void main(String args)
	{
		 MyInteger n = new MyInteger(10);
	     System.out.println(n.isPrime());
	}
}

class MyInteger
{
	//An int data field named value that stores the int value represented by this object.
	private int value;
	//A constructor that creates a MyInteger object for the specified int value.
	public MyInteger(int value)
	{
		this.value = value;
	}
	//A get method that returns the int value.
	public int GetMyInger()
	{
		return value;
	}
	//Methods isEven(), isOdd(), and isPrime() that return true 
	//if the value is even, odd, or prime, respectively.
	public boolean isEven()
	{
		return value % 2 == 0 ? true : false;
	}
	public boolean isOdd()
	{
		return value % 2 == 0 ? false : true;
	}
	public boolean isPrime()
	{
		if(value == 1)
			return true;
		for(int i = 2 ; i*i <= value ; i++)
		{
			if(value%i == 0)
				return false;
		}
		return true;
	}
	//Static methods isEven(int), isOdd(int), and isPrime(int) that return true 
	//if the specified value is even, odd, or prime, respectively.
	public static boolean isEven(int num)
	{
		return num % 2 == 0 ? true : false;
	}
	public static boolean isOdd(int num)
	{
		return num % 2 == 0 ? false : true;
	}
	public static boolean isPrime(int num)
	{
		if(num == 1)
			return true;
		for(int i = 2 ; i*i <= num ; i++)
		{
			if(num % i == 0)
				return false;
		}
		return true;
	}
	//Static methods isEven(MyInteger), isOdd(MyInteger), and isPrime(MyInteger) that return true 
	//if the specified value is even, odd, or prime, respectively.
	
	
	//Methods equals(int) and equals(MyInteger) that return true 
	//if the value in the object is equal to the specified value.
	public boolean isEqual(int num)
	{
		return this.value == num;
	}
	public boolean isEqual(MyInteger num)
	{
		return this.value == num.GetMyInger();
	}
	//A static method parseInt(char[]) that converts an array of numeric characters to an int value.
	public static int parseInt(char[] str)
	{
		 return Integer.parseInt(str.toString());
	}
	//A static method parseInt(String) that converts a string into an int value. 
	//Implement the class. Write a client program that tests all methods in the class.
	public static int parseInt(String str)
	{
		 return Integer.parseInt(str);
	}
	
}
