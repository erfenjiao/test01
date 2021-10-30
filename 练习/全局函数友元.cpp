//友元（friend）: 让一个函数能够访问到另一个函数或类中的私有成员 
//三种实现：全局函数、类、成员函数做友元 

#include<iostream>
#include<string>
using namespace std;

class Buliding{
	friend void GoodGay(Buliding * buliding);
	public:
		Buliding()
		{
			m_SittingRoom = "客厅";
			m_BedRoom = "卧室";
		}
	public:
		string m_SittingRoom;
	private:
		string m_BedRoom;
};

//全局函数 
void GoodGay(Buliding * buliding)
{
	 cout << "好基友的成员函数正在访问" << buliding->m_SittingRoom << endl;
	 cout << "好基友的成员函数正在访问" << buliding->m_BedRoom << endl;
}

void test01()
{
	Buliding buliding;
	GoodGay(&buliding);
}

int main()
{
	test01();
 } 
