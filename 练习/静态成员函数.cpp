//��̬��Ա����
//���ж�����һ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

#include<iostream>
#include<string>
using namespace std; 

class Person{
	public:
		static void func()
		{
			m_a = 100;
			//m_b = 200;  //��̬��Ա�������ܷ��ʷǾ�̬��Ա���� 
			
			cout << "static void �����õ���"  <<  endl;
		}
		
		
		
		static int m_a;
		int m_b;
}; 

void test01()
{
	//1.ͨ��������з���
	Person p;
	p.func();
	
	//2.ͨ���������з���
	Person :: func() ;
}

int main()
{
	test01();
}
