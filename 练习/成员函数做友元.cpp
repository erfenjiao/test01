//��Ա��������Ԫ 
#include<iostream>
#include<string>
using namespace std;

class Buliding;

class GoodGay{
	public:
		GoodGay();
		
		void visit();
		void visit2();
		
		Buliding * buliding;
};

class Buliding{
	friend void GoodGay::visit();
	public:
		Buliding();
	public:
		string m_SittingRoom;
	private:
		string m_BedRoom;
};

Buliding::Buliding()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
	 
} 

GoodGay::GoodGay()
{
	buliding = new Buliding ;
}

void GoodGay::visit()
{
	cout << "visit() ���ڷ���" << buliding->m_SittingRoom << endl;
	
	cout << "visit() ���ڷ���" << buliding->m_BedRoom << endl;
}

void GoodGay::visit2()
{
	cout << "visit() ���ڷ���" << buliding->m_SittingRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit();
}

int main()
{
	
}
