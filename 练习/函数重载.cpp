#include<iostream>
using namespace std;
/*
函数重载，函数名可以相同，提高函数复用性 
满足条件：1.同一个作用域下
          2.函数名称相同
		  3.函数参数类型不同，或者个数不同，或者顺序不同 
		  4.返回值不能作为函数重载的条件 
注意事项：1.引用作为函数重载的条件
		  2. 函数重载碰到默认参数 
			 
*/
void func(int &a)
{
	
	cout << "this is func(int &a) " << endl;
}

void func(const int &a)
{
	
	cout << "this is func(const int &a) ！" << endl;
}

void func(double a)
{
	
	cout << "this is func(double a) ！" << endl;
}

int main()
{
	
//	func(10);
//	func(3.14);
	
	int a = 10;
	func(a); 
	
	func(1);
	
	system("pause");
	
	return 0;
 } 
