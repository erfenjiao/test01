#include<iostream>
#include<string>
using namespace std;

class Calculator{
	
	public:
		int getResult(string oper)
		{
			if(oper == "+")
			{
				return m_Num1 + m_Num2;
			}
			else if(oper == "-")
			{
				return m_Num1 - m_Num2;
			}
			else if(oper == "*")
			{
				return m_Num1 * m_Num2;
			}
			//想要扩展新功能，就要修改源码
			//真实的开发中 ， 对扩展进行开发，对修改进行关闭 
		}
	
	
	int m_Num1;
	int m_Num2;
}; 

void test01()
{
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 20;
	
	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+")  << endl; 
}

int main()
{
	test01();
}
