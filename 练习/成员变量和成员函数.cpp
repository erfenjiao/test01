//成员变量和成员函数是分开存储
#include<iostream>
using namespace std;

class Person{
	
};

void test01()
{
	Person p;
	
	//空对象占用内存空间 1. c++给每个空对象分配一个字节空间，是为了区分空对象
	//占内存的位置
	//每个空对象会分配一个独一无二的地址 
	cout << "size of p = " << sizeof(p) << endl;
}


int main()
{
	
}
