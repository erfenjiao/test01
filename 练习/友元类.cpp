//类做友元
//友元（friend）: 让一个函数能够访问到另一个函数或类中的私有成员 
//三种实现：全局函数、类、成员函数做友元 

#include<iostream>
#include<string>
using namespace std;

class Buliding;

class GoodGay{
	public:
		void visit(); //参观函数，访问Buliding中的属性  
		
		Buliding *buliding;
		
		GoodGay();
};

class Buliding{
	public:
		Buliding();
	public:
		string m_SittingRoom;
	private:
		string m_BedRoom;	
};

Buliding::Buliding()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
	buliding = new Buliding;
}

void GoodGay::visit()
{
	cout << "好基友类正在访问" << buliding->m_SittingRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit();
}

int main()
{
	test01();
 }  
