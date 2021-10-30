package org.yuan.my_project;
import java.util.*;

/*

public class Classes{
	
	public static void main(String[] args){
		Scanner cin = new Scanner(System.in);
		double x1,y1,x2,y2,x3,y3,x4,y4;
		System.out.print("Enter x1,y1,x2,y2,x3,y3,x4,y4:");
		x1 = cin.nextDouble();
		y1 = cin.nextDouble();
		x2 = cin.nextDouble();
		y2 = cin.nextDouble();
		x3 = cin.nextDouble();
		y3 = cin.nextDouble();
		x4 = cin.nextDouble();
		y4 = cin.nextDouble();
		double a,b,c,d,e,f;
		a = y1 - y2;
		b = -(x1 - x2);
		c = y3 - y4;
		d = -(x3 - x4);
		e = (y1-y2)*x1 - (x1-x2)*y1;
		f = (y3-y4)*x3 - (x3-x4)*y3;
		LinearEquation expr = new LinearEquation(a,b,c,d,e,f);
		
		if(expr.isSolvable()){
			System.out.println("x:" + expr.getX() + "  " + "y:" + expr.getY());
		}
		else
			System.out.println("The tow line are parallel");
	}
}
 
class LinearEquation{
	private double a,b,c,d,e,f;
	
	public LinearEquation(double v1, double v2, double v3, double v4, double v5, double v6){
		a = v1;
		b = v2;
		c = v3;
		d = v4;
		e = v5;
		f = v6;
	}
	
	public double getA(){
		return a;
	}
	
	public double getB(){
		return b;
	}
	
	public double getC(){
		return c;
	}
	
	public double getD(){
		return d;
	}
	
	public double getE(){
		return e;
	}
	
	public double getF(){
		return f;
	}
	
	public boolean isSolvable(){
		if((a*d-b*c) != 0)
			return true;
		else
			return false;
	}
	
	public double getX(){
		return (e*d-b*f)/(a*d-b*c);
	}
	
	public double getY(){
		return (a*f-e*c)/(a*d-b*c);
	}
}

/*


//-------------------------------------------------------------------------------------------

/*
public class Classes{
	public static void main(String args)
	{
		QuadraticEquation expr = new QuadraticEquation(1,4,4);
		if(expr.getRoot1() == 0 && expr.getRoot2() == 0){
			System.out.println("The equation has no roots");
		}
		else if(expr.getRoot1() == expr.getRoot2())
			System.out.println("R : " + expr.getRoot1());
		else
			System.out.println("R1 : " + expr.getRoot1() + "    " + "R2 :" + expr.getRoot2());
	}
}

class QuadraticEquation
{
	private double  a , b , c;
	QuadraticEquation(double x , double y , double z)
	{
		a = x;
		b = y;
		c = z;
	}
	public double getA(){
		return a;
	}
	
	public double getB(){
		return b;
	}
	
	public double getC(){
		return c;
	}
	
	public double getDiscriminant(){
		return b*b - 4*a*c;
	}
	
	public double getRoot1(){
		double judge = this.getDiscriminant();
		if(judge >= 0){
			return (-b + Math.sqrt(judge))/(2*a);
		}
		else
			return 0;
	}
	
	public double getRoot2(){
		double judge = this.getDiscriminant();
		if(judge >= 0){
			return (-b + Math.sqrt(judge))/(2*a);
		}
		else
			return 0;
	}

}
*/

//-----------------------------------------------------------------------------

/*
public class Classes {
		public static void main(String args)
		{
			Account account = new Account(1122 , 20000);
			if(account.WithDraw(2500))
			{
				System.out.println("withdraw Success!");
			}
			if(account.deposit(3000))
			{
				System.out.println("deposit Success!");
			}
			System.out.println("balance:" + account.GetBalance());
			System.out.println("monthly interest:" + account.getMonthlyInterestRate()*account.getBalance());
			System.out.println(account.GetDataCreated());
		}
}


class Account
{
		private int id;
		private double balance;
		private double annualInterestRate;   //stores the current interest rate
		private Data dataCreated;            //stores the date when the account was created.
		
		public Account()
		{
			dataCreated = new Date();
			id = 0;
			balance = 0;
			annualInterestRate = 0;
		}
		public Account(int ID , double BALANCE)
		{
			dataCreated = new Date();
			id = ID;
			balance = BALANCE;
			annualInterestRate = 0.45;
		}
		public int GetId()
		{
			return id;
		}
		public int SetId(int ID)
		{
			id = ID;
		}
		public double GetBalance()
		{
			return balance;
		}
		public double SetBlance(double BALANCE)
		{
			balance = BALANCE;
		}
		public double GetAnnualInterestRate()
		{
			return annualInterestRate;
		}
		public double SetAnnualInterestRate(double ANNUALINTERESTRATE)
		{
			annualInterestRate = ANNUALINTERESTRATE;
		}
		public Data GetDataCreated()
		{
			return dataCreated;
		}
		public double getMonthlyInterestRate()
		{
			return annualInterestRate/12.0;
		}
		public boolean WithDraw(double money)
		{
			if(balance > money)
			{
				balance -= money;
				return true;
			}
			else
			{
				return false;
			}
		}
		public boolean deposit(double money){
			if(money >= 0){
				balance += money;
				return true;
			}
			else
				return false;
		}
}
*/