package org.yuan.my_project;
import java.util.Scanner;

class Pepole
{
		String name;
		int  grade;
};

public class help
{
	public static void main(String args[])
	{
		int i=0,k=0,flag=0;
		Pepole[] s=new Pepole[10];
		//s[] s=new s[10];
		Scanner sc=new Scanner(System.in);
		System.out.println("请输入学生的名字和成绩：");
		s[i].name=sc.nextLine();
		s[i].grade=sc.nextInt();
		while(s[i].name!="noname")
		{
			i++;
			s[i].name=sc.nextLine();
			s[i].grade=sc.nextInt();
		}
		String n=sc.next();
		while(s[k].name!="noname")
		{
			if(s[k].name==n)
			{
				System.out.println(s[k].grade*0.21);
				flag=1;
			}
			k++;
		}
		if(flag==1)
		{
			System.out.println("Not found.");
		}
	    
	    
	}
}
