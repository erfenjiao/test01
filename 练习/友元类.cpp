//������Ԫ
//��Ԫ��friend��: ��һ�������ܹ����ʵ���һ�����������е�˽�г�Ա 
//����ʵ�֣�ȫ�ֺ������ࡢ��Ա��������Ԫ 

#include<iostream>
#include<string>
using namespace std;

class Buliding;

class GoodGay{
	public:
		void visit(); //�ιۺ���������Buliding�е�����  
		
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
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay()
{
	buliding = new Buliding;
}

void GoodGay::visit()
{
	cout << "�û��������ڷ���" << buliding->m_SittingRoom << endl;
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
