// 1 - 9  深度优先搜索 - - - + - - - = - - -
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
1.如何往盒子中放扑克牌？
	for(int i = 1 ; i <= n ; i++)
	{
		a[step] = i;   //将第 i 号扑克牌放进第 step 个盒子中
	}
2.标记哪些牌被使用   book[i]
	for(int i = 1 ; i <= n ; i++)
	{
		if(book[i] == 0)
		{
			a[step] = i;   //将第 i 号扑克牌放进第 step 个盒子中
			book[i] = 1;
		}
	}
3.将扑克牌放入盒子的操作封装成一个函数 dfs
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
				a[step] = i;   // 将第 i 号扑克牌放进第 step 个盒子中
				book[i] = 1;
				dfs(step + 1); // 进行下一步
				book[i] = 0;   // 收回扑克牌
			}
		}
		return ;
	}
*/

