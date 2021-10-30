#include<iostream>
using namespace std;

//类模板成员函数类外实现

template<class T1 , class T2>
class Person
{
public:
	Person(T1 name, T2 age);   //想要在类外实现，在类内声明
	/* {
		this->m_Name = name;
		this->m_Age = age;
	}*/
	void showPerson();
	/*{
		cout << "name = " << this->m_Name << endl;
		cout << "age = " << this->m_Age << endl;
	}*/
	T1 m_Name;
	T2 m_Age;
};

//构造函数类外实现
template<class T1 , class T2>
Person<T1 ,T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}

//成员函数类外实现
template<class T1 , class T2>
void Person<T1, T2>::showPerson()
{
	cout << "name = " << this->m_Name << endl;
	cout << "age = " << this->m_Age << endl;
}

void test01()
{
	Person<string, int>P("ss", 20);
	P.showPerson();
}


/*int main()
{
	test01();
}*/
