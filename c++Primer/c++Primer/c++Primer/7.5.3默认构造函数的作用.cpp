#include<iostream>
#include<vector>
using namespace std;

class No
{
	No(int);
};

struct A
{
	A(int a = 0):my_mem(a) {}
	No my_mem;
};

A a(9);

int main()
{
	vector<A> vec(10);   //�Ϸ���A����Ĭ�Ϲ��캯����Noû��

	return 0;
}