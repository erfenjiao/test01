#include<iostream>
using namespace std;

class Person{
	public:
		Person(int age)
		{
			m_Age = new int(age); //开辟在堆区，需要手动释放 
		}
		
		~Person()
		{
			if(m_Age != NULL)
			{
				delete m_Age;
				m_Age = NULL; 
			}
		}
		
		//重载 赋值运算符
		void operator=(Person &p)
		{
			//编译器提供浅拷贝
			
			
			
			//先判断是否有属性在堆区，如果有先释放干净 ，再进行深拷贝 
		 } 
		
		int *m_Age;
}; 

void test01()
{
	Person p1(18);
	
	Person p2(20); 
	
	p2 = p1;  //赋值操作 
	
	cout << "p1 's age is :" << *p1.m_Age << endl;
	
	cout << "p2 's age is :" << *p2.m_Age << endl;
}


int main()
{
	test01();
}
