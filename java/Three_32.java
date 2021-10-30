//3.32
package org.yuan.my_project;

import java.util.*;

public class Three_32 {
	public static void main(String[] args)
	{
		Scanner cin = new Scanner(System.in);
		System.out.print("Enter three points for p0 , p1 , p2:");
		double x0 = cin.nextDouble();
		double y0 = cin.nextDouble();
		double x1 = cin.nextDouble();
		double y1 = cin.nextDouble();
		double x2 = cin.nextDouble();
		double y2 = cin.nextDouble();
		double result = (x1 - x0)*(y2 - y0) - (x2 - x0)*(y1 - y0);
		if(result > 0)
		{
			System.out.print("(");
			System.out.print(x2);
			System.out.print(" , ");
			System.out.print(y2);
			System.out.print(")");
			System.out.print(" is on the left of the line from (");
			System.out.print(x0);
			System.out.print(" , ");
			System.out.print(y0);
			System.out.print(") to (");
			System.out.print(x1);
			System.out.print(" , ");
			System.out.print(y1);
			System.out.print(")");
		}
		else if(result == 0)
		{
			System.out.print("(");
			System.out.print(x2);
			System.out.print(" , ");
			System.out.print(y2);
			System.out.print(")");
			System.out.print(" is on the same line from (");
			System.out.print(x0);
			System.out.print(" , ");
			System.out.print(y0);
			System.out.print(") to (");
			System.out.print(x1);
			System.out.print(" , ");
			System.out.print(y1);
			System.out.print(")");
		}
		else
		{
			System.out.print("(");
			System.out.print(x2);
			System.out.print(" , ");
			System.out.print(y2);
			System.out.print(")");
			System.out.print(" is on the right of the line from (");
			System.out.print(x0);
			System.out.print(" , ");
			System.out.print(y0);
			System.out.print(") to (");
			System.out.print(x1);
			System.out.print(" , ");
			System.out.print(y1);
			System.out.print(")");
		}
	}
}
