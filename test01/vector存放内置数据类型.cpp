#include<iostream>
#include<algorithm>  //标准算法头文件
#include<vector>
using namespace std;
//vector容器存放内置数据类型

void MyPrintf(int val)
{
	cout << val << endl;
}

void test01()
{
	//创建一个容器，相当于一个数组
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//通过迭代器访问数据
	vector<int>::iterator itBegin = v.begin();   //起始迭代器
	vector<int>::iterator itEnd = v.end();     //结束迭代器

	//第一种遍历方式
	/*while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}*/

	//第二种遍历方式
	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}*/

	//3、STL算法
	for_each(v.begin() , v.end() , MyPrintf);  //利用回调机制
}


int main()
{
	test01();
	
	return 0;
}