#include<iostream>
#include<string>
using namespace std;
/**
	�����ʼ�������� 
	���캯��
	�������� 
	*/
class Person 
{
	public:
		Person()
		{
			cout << "���캯�����޲ε���" << endl;
		}
		Person(int a)
		{
			age = a;
			cout << "���캯�����вε���" << endl;
		}
		Person(const Person &p)
		{
			cout << "���캯���Ŀ������캯������" << endl;
			age = p.age;
		}
		~Person()
		{
			cout << "���������ĵ���" << endl;
		}
		int age; 
} ;

void test01()
{
	Person p1;
	//��ջ�ϵ����ݣ�test01ִ����Ͼͻᱻ�ͷ�  
	Person p2(10);
	Person p3(p2);
}
 
int main()
{
	test01();
}
