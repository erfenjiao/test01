//
//main.cpp
//QueueSystem
//
//����ֻ��Ҫ������ṩ����������
//1.�ܹ��ķ���ʱ��
//2.���񴰿ڵ�����

#include"QueueSytem.hpp"

#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	srand((unsigned)time(0));        //ʹ�õ�ǰʱ����Ϊ���������

	int total_service_time = 240;    //�����Ӽ���
	int window_num         = 4;
	int simulate_num       = 100000; //ģ�����

	QueueSystem(total_service_time, window_num);
	system.simulate(simulate_num);

	cout << "The average time of customer stay in bank: "
		 << system.getAvgStayTime() << endl;
	cout << "The number od cuestomer arrive bank per minute: "
		 << system.getAvgCustomers() << endl;

	return 0;
}

/*
�ܽ�һ�£�����������Ҫʵ�ֵĶ����У�

���񴰿���(�ᱻ���� w ��)
�˿Ͷ�����(ֻ�ᱻ����һ��)
�˿ͽṹ(���������������: ����ʱ��, ����ʱ��)

����������

QueueSystem ��: ������������ϵͳ��ģ�⣻
ServiceWindow ��: ����ϵͳ�ķ��񴰿ڶ���ÿ��һ�����д���ʱ�����񴰿ڻᱻ������Ϊ��������������������Ǽ�����Ҫ���� window_num �����ڣ�
Queue ��: ���ж���ϵͳ�Ĺ˿��ŶӵĶ��У�
Random ��: �ڵڶ������Ѿ����۹���
*/

