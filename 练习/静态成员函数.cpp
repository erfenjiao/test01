//静态成员函数
//所有对象共享一个函数
//静态成员函数只能访问静态成员变量

#include<iostream>
#include<string>
using namespace std; 

class Person{
	public:
		static void func()
		{
			m_a = 100;
			//m_b = 200;  //静态成员函数不能访问非静态成员变量 
			
			cout << "static void 函数得调用"  <<  endl;
		}
		
		
		
		static int m_a;
		int m_b;
}; 

void test01()
{
	//1.通过对象进行访问
	Person p;
	p.func();
	
	//2.通过类名进行访问
	Person :: func() ;
}

int main()
{
	test01();
}
