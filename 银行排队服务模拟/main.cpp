//
//main.cpp
//QueueSystem
//
//银行只需要对外界提供两个参数：
//1.总共的服务时间
//2.服务窗口的数量

#include"QueueSytem.hpp"

#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	srand((unsigned)time(0));        //使用当前时间作为随机数种子

	int total_service_time = 240;    //按分钟计算
	int window_num         = 4;
	int simulate_num       = 100000; //模拟次数

	QueueSystem(total_service_time, window_num);
	system.simulate(simulate_num);

	cout << "The average time of customer stay in bank: "
		 << system.getAvgStayTime() << endl;
	cout << "The number od cuestomer arrive bank per minute: "
		 << system.getAvgCustomers() << endl;

	return 0;
}

/*
总结一下，现在我们需要实现的东西有：

服务窗口类(会被创建 w 个)
顾客队列类(只会被创建一个)
顾客结构(包含两个随机属性: 到达时间, 服务时间)

类的设计需求：

QueueSystem 类: 负责整个队列系统的模拟；
ServiceWindow 类: 队列系统的服务窗口对象，每当一个银行创建时，服务窗口会被创建，为了让整个问题更加灵活，我们假设需要创建 window_num 个窗口；
Queue 类: 银行队列系统的顾客排队的队列；
Random 类: 在第二节中已经讨论过。
*/

