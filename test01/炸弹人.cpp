/*
1.广度优先搜索
*/
#include<stdio.h>

struct Node
{
	int x;
	int y;
};

char a[20][21];

int getnum(int i , int j)
{
	int sum, x, y;
	sum = 0;
	x = i, y = j;
	while (a[x][y] != '#')
	{
		if (a[x][y] == 'G')
		{
			sum++;
		}
		x--;  //向上统计
	}

	x = i, y = j;
	while (a[x][y] != '#')
	{
		if (a[x][y] == 'G')
		{
			sum++;
		}
		x++;  //向上统计
	}

	x = i, y = j;
	while (a[x][y] != '#')
	{
		if (a[x][y] == 'G')
		{
			sum++;
		}
		y--;  //向上统计
	}

	x = i, y = j;
	while (a[x][y] != '#')
	{
		if (a[x][y] == 'G')
		{
			sum++;
		}
		y++;  //向上统计
	}
	return sum;
}

int main()
{
	//扩展队列
	struct Node que[401];
	int head, tail;
	int book[20][21] = { 0 };
	int sum, max = 0, n, m, mx, my, startx, starty, tx, ty;
	int next[4][2] = {
		{0 , 1} , {1 , 0} , {0 , -1} , {-1 , 0}
	};

	scanf_s("%d %d %d %d", &n, &m , &startx , &starty);
	for (int i = 0; i < n; i++)
   `		scanf_s("%s", a[i]);

	head = 1;
	tail = 1;
	que[tail].x = startx;
	que[tail].y = starty;
	tail++;
	book[startx][starty] = 1;
	mx = startx;
	my = starty;
	while (head < tail)
	{
		for (int k = 0; k <= 3; k++)
		{
			//尝试走
			tx = que[tail].x + next[k][0];
			ty = que[tail].y + next[k][1];

			//边界条件
			if (tx < 0 || tx>n-1 || ty<0 || ty>m-1)
			{
				continue;
			}

			//判断是否走过
			if (a[tx][ty] == '.' && (book[tx][ty] == 0))
			{
				book[tx][ty] = 1;
				que[tail].x = tx;
				que[tail].y = ty;
				tail++;

				sum = getnum(tx, ty);

				if (sum > max)
				{
					max = sum;
					mx = tx;
					my = ty;
				}
			}
		}
		head++;
	}

	printf("将炸弹放置在（%d , %d）处 ， 可以消灭%d 个敌人\n", mx, my, max);

	return 0;
}