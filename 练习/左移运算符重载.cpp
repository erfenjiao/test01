//�������������
#include<iostream>
using namespace std;

class Person{
	//���ó�Ա�����������������
//	void operate<<( cout )
//	{
//		
//	 } 
//�����ôд����ô������ p<<cout,�Ǵ���� 
//	public:
//		int m_A;
//		int m_B;
	private:
		int m_A;
		int m_B;
}; 
/*
��Ա�����������������������ֻ��ʹ��ȫ�ֺ���
��ô��p��Person�������ͣ�cout��ʲô�أ� 
��ostream cout 
 extern ostream cout;		/// Linked to standard output 
 
 */
ostream & operator<<(ostream &cout , Person &p)  //���ʣ�cout << p 
{
	cout << "m_A = " << p.m_A << "   m_B = " << p.m_B << endl;
	
	return cout;
 } 

void test01()
{
	Person p;
	p.m_A = 10;
	p.m_B = 10;
	
	cout << p <<endl;
}


int main()
{
	test01();
}
