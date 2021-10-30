#include<iostream>
#include<string>
using namespace std;
/**
	对象初始化和清理 
	构造函数
	析构函数 
	*/
class Person 
{
	public:
		Person()
		{
			cout << "构造函数的无参调用" << endl;
		}
		Person(int a)
		{
			age = a;
			cout << "构造函数的有参调用" << endl;
		}
		Person(const Person &p)
		{
			cout << "构造函数的拷贝构造函数调用" << endl;
			age = p.age;
		}
		~Person()
		{
			cout << "析构函数的调用" << endl;
		}
		int age; 
} ;

void test01()
{
	Person p1;
	//在栈上的数据，test01执行完毕就会被释放  
	Person p2(10);
	Person p3(p2);
}
 
int main()
{
	test01();
}
