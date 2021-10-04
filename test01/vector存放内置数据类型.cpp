#include<iostream>
#include<algorithm>  //��׼�㷨ͷ�ļ�
#include<vector>
using namespace std;
//vector�������������������

void MyPrintf(int val)
{
	cout << val << endl;
}

void test01()
{
	//����һ���������൱��һ������
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//ͨ����������������
	vector<int>::iterator itBegin = v.begin();   //��ʼ������
	vector<int>::iterator itEnd = v.end();     //����������

	//��һ�ֱ�����ʽ
	/*while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}*/

	//�ڶ��ֱ�����ʽ
	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}*/

	//3��STL�㷨
	for_each(v.begin() , v.end() , MyPrintf);  //���ûص�����
}


int main()
{
	test01();
	
	return 0;
}