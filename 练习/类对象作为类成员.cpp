//�������Ϊ���Ա
#include<iostream>
#include<string>
using namespace std; 

class Phone
{
public:
	
	Phone(string PName)
	{
		cout << "Phone ��������������" << endl;
		m_PName = PName;
	}
	string m_PName;	
	

};

class Person
{
public:
	//��ʼ���б� 
	Person(string Name , string PName):m_Name(Name) , m_Phone(PName)
	{
		cout << "Person �Ĺ��캯������" << endl;
	}
	
	~Person()
	{
		cout << "Person de ������������" << endl;
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
