//��Ԫ��friend��: ��һ�������ܹ����ʵ���һ�����������е�˽�г�Ա 
//����ʵ�֣�ȫ�ֺ������ࡢ��Ա��������Ԫ 

#include<iostream>
#include<string>
using namespace std;

class Buliding{
	friend void GoodGay(Buliding * buliding);
	public:
		Buliding()
		{
			m_SittingRoom = "����";
			m_BedRoom = "����";
		}
	public:
		string m_SittingRoom;
	private:
		string m_BedRoom;
};

//ȫ�ֺ��� 
void GoodGay(Buliding * buliding)
{
	 cout << "�û��ѵĳ�Ա�������ڷ���" << buliding->m_SittingRoom << endl;
	 cout << "�û��ѵĳ�Ա�������ڷ���" << buliding->m_BedRoom << endl;
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
