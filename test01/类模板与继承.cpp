#include<iostream>
using namespace std;

template<class T>
class Base 
{
	T m;
};

//class Son : public Base  错误，没有指定父类中T的数据类型，不能继承给子类
//class Son :public Base<int>    //指定了参数类型，但是似乎只能是这个类型了
//{
//};

//如果想灵活的指定父类中的T类型，子类也需要变类模板
template<class T1 , class T2>
class Son2 :public Base<T2>
{
public:
	Son2()  //构造函数
	{
		cout << "T1的数据类型为:" << typeid(T1).name() << endl;
		cout << "T2的数据类型为:" << typeid(T2).name() << endl;
	}
	//T1 obj;
};

void test02()
{
	Son2<int , char>S2;
}

//int main()
//{
//	test02();

//	system("pause");

	//return 0;
//}
