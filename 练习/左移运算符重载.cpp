//左移运算符重载
#include<iostream>
using namespace std;

class Person{
	//利用成员函数重载左移运算符
//	void operate<<( cout )
//	{
//		
//	 } 
//如果这么写，那么最后会变成 p<<cout,是错误的 
//	public:
//		int m_A;
//		int m_B;
	private:
		int m_A;
		int m_B;
}; 
/*
成员函数不能重载左移运算符，只能使用全局函数
那么，p是Person数据类型，cout是什么呢？ 
答：ostream cout 
 extern ostream cout;		/// Linked to standard output 
 
 */
ostream & operator<<(ostream &cout , Person &p)  //本质：cout << p 
{
	cout << "m_A = " << p.m_A << "   m_B = " << p.m_B << endl;
	
	return cout;
 } 

void test01()
{
	Person p;
	p.m_A = 10;
	p.m_B = 10;
	
	cout << p <<endl;
}


int main()
{
	test01();
}
