//运算符重载:对已有的运算符重新进行定义，赋予另一种功能，以适应不同的数据类型 
#include<iostream>
using namespace std;

class Person{
	public:
		int m_A;
		int m_B;
};

Person p1;
p1.m_A = 10;
p1.m_B = 100;

Person p2;
p2.m_A = 10;
p2.m_B =100;

Person p3 = p1+p2;

int main()
{
	
 } 
