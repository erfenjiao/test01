#include<iostream>
using namespace std;
/*
�������أ�������������ͬ����ߺ��������� 
����������1.ͬһ����������
          2.����������ͬ
		  3.�����������Ͳ�ͬ�����߸�����ͬ������˳��ͬ 
		  4.����ֵ������Ϊ�������ص����� 
ע�����1.������Ϊ�������ص�����
		  2. ������������Ĭ�ϲ��� 
			 
*/
void func(int &a)
{
	
	cout << "this is func(int &a) " << endl;
}

void func(const int &a)
{
	
	cout << "this is func(const int &a) ��" << endl;
}

void func(double a)
{
	
	cout << "this is func(double a) ��" << endl;
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
