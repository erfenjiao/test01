#include<iostream>

using namespace std;

class Person{
	
	public:
		Person()
		{
			cout << "Person的默认构造函数调用" << endl;
		}
		
		Person(int age , int height)
		{
			m_Age = age;
			m_Height = new int(height);
			cout << "Person的有参构造函数调用" << endl;
		}
		
		~Person()
		{
			//m_Age = age;
			cout << "Person的析构函数调用" << endl;
		}
		
		int m_Age;
		int * m_Height;
};

void test01()
{
	Person p1(18 , 160);
	
	cout << "p1 's age = " << p1.m_Age << endl;
	cout << "p1 's height = " << *p1.m_Height << endl;
	
	Person p2(p1);
	
	cout << "p2 's age = " << p2.m_Age << endl;
	cout << "p2 's height = " << *p2.m_Height << endl;
}

int main()
{
	test01();
	
	
	
	system("pause");
}











