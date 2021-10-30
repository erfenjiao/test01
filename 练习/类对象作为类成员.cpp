//类对象作为类成员
#include<iostream>
#include<string>
using namespace std; 

class Phone
{
public:
	
	Phone(string PName)
	{
		cout << "Phone 的析构函数调用" << endl;
		m_PName = PName;
	}
	string m_PName;	
	

};

class Person
{
public:
	//初始化列表 
	Person(string Name , string PName):m_Name(Name) , m_Phone(PName)
	{
		cout << "Person 的构造函数调用" << endl;
	}
	
	~Person()
	{
		cout << "Person de 析构函数调用" << endl;
	}
	
	//Name
	string m_Name;
	
	//Phone	
	Phone m_Phone;
	

};

void test01()
{
	Person p("zhangsan" , "apple");
	
	cout << p.m_Name  << endl;
}


int main()
{
	test01();
 } 
