// 1 - 9  ����������� - - - + - - - = - - -
#include<stdio.h>
int sum = 0, a[10], book[10];
void dfs(int step)
{
	if (step == 10)
	{
		if (a[1] * 100 + a[2] * 10 + a[3] + a[4] * 100 + a[5] * 10 + a[6] == a[7] * 100 + a[8] * 10 + a[9])
		{
			sum++;
			printf("%d%d%d + %d%d%d = %d%d%d\n", a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
		}
		return;
	}
	for (int i = 1; i <= 9; i++)
	{
		if (book[i] == 0)
		{
			a[step] = i;
			book[i] = 1;
			dfs(step + 1);
			book[i] = 0;
		}
	}
	return;
}

int main()
{
	dfs(1);
	printf("sum = %d ", sum/2);
	return 0;
}











/*
1.����������з��˿��ƣ�
	for(int i = 1 ; i <= n ; i++)
	{
		a[step] = i;   //���� i ���˿��ƷŽ��� step ��������
	}
2.�����Щ�Ʊ�ʹ��   book[i]
	for(int i = 1 ; i <= n ; i++)
	{
		if(book[i] == 0)
		{
			a[step] = i;   //���� i ���˿��ƷŽ��� step ��������
			book[i] = 1;
		}
	}
3.���˿��Ʒ�����ӵĲ�����װ��һ������ dfs
	void dfs(int step)
	{
		if(step == n+1)
		{
			for(int i = 1 ; i <= n ; i++)
			{
				printf("%d" , a[i]);
			}
			printf("\n");

			return ;
		}

		for(int i = 1 ; i <= n ; i++)
		{
			if(book[i] == 0)
			{
				a[step] = i;   // ���� i ���˿��ƷŽ��� step ��������
				book[i] = 1;
				dfs(step + 1); // ������һ��
				book[i] = 0;   // �ջ��˿���
			}
		}
		return ;
	}
*/

