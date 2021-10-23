#include<iostream>
#include<string>
#include<vector>
using namespace std;

//vector ����Զ�����������

class Person 
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int    m_Age;
};

void test01()
{
	vector<Person>v;

	Person p1("a" , 10);
	Person p2("b" , 20);
	Person p3("c" , 30);
	Person p4("d" , 40);
	Person p5("e" , 50);

	//���������������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//���������е�����
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "name = " << (*it).m_Name << endl;
		cout << "age = " << (*it).m_Age << endl;
	}
}

//����Զ����������͵�ָ��
void test02()
{
	vector<Person*>v;
	Person p1("a", 10);
	Person p2("b", 20);
	Person p3("c", 30);
	Person p4("d", 40);
	Person p5("e", 50);

	//���������������
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "name = " << (*it)->m_Name << endl;
		cout << "age = " << (*it)->m_Age << endl;
	}

}

int main()
{
	//test01();
	test02();
	return 0;
}