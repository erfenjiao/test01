package org.yuan.my_project;

import java.util.*;

public class Classes_2_10_4 {
	public static void main(String args)
	{
		//Write a test program that creates two points (0, 0) and (10, 30.5) 
		//and displays the distance between them.
		 MyPoint p1 = new MyPoint();
         MyPoint p2 = new MyPoint(10,30.5);
         System.out.println(p1.distance(p2));
	}
}

//Design a class named MyPoint to represent a point with x and y-coordinates.  表示一个坐标（x,y）
class MyPoint
{
	private double x,y;
	//A no-arg constructor that creates a point (0, 0).
	public MyPoint()
	{
		x = 0;
		y = 0;
	}
	//A constructor that constructs a point with specified coordinates.
	//Two data fields x and y that represent the coordinates with get methods.
	public MyPoint(double x,double y)
	{
		this.x = x;
		this.y = y;
	}
	//Two get methods for data fields x and y, respectively.
	public double GetX()
	{
		return x;
	}
	public double GetY()
	{
		return y;
	}
	
	//A method named distance that returns the distance 
	//from this point to another point of the MyPoint type.
	public double distance(MyPoint p)
	{
		return Math.sqrt(Math.pow(this.x - p.x, 2) + Math.pow(this.y - p.y, 2));
	}
	//A method named distance that returns the distance 
	//from this point to another point with specified x- and y-coordinates.
	public double distance(double x , double y)
	{
		return Math.sqrt(Math.pow(this.x-x , 2) + Math.pow(this.y - y , 2));
	}
}
