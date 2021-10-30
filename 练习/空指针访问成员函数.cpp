//空指针访问成员函数
#include<iostream>
using namespace std;

class Person{
	public:
		void ShowClassName()
		{
			cout << "This is Person class"  << endl;
		}
		
		void ShowPersonAge()
		{
			cout << "Age = " << m_Age << endl;
		}
		int m_Age;
}; 

void test01()
{
	Person *p1 = NULL;
	p1->ShowClassName();
	//p1->ShowPersonAge();
	
}





int main()
{
	test01();
 } 
