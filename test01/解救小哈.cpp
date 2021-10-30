/*
广度优先搜索
使用结构体实现队列
*/
#include<stdio.h>
struct note
{
	int x;
	int y;
	int f;  
	int step;
};

int main()
{
	struct note que[2501];
	int a[51][51] = { 0 };   //储存地图
	int book[51][51] = { 0 };
	int next[4][2] = {
		{0 , 1},
		{1 , 0},
		{0 , -1},
		{-1 , 0} };
	int head  , tail;
	int n, m , startx = 0, starty = 0, tx , ty , p = 0 , q = 0 , flag;

	scanf_s("%d %d", &n ,&m);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			scanf_s("%d", &a[i][j]);
	scanf_s("%d %d %d %d", &startx, &starty, &p, &q);


	head = 1, tail = 1;
	que[tail].x = startx;
	que[tail].y = starty;
	que[tail].f = 0;
	que[tail].step = 0;
	tail++;
	book[startx][starty] = 1;

	flag = 0;
	while (head < tail)
	{
		for (int k = 0; k <= 3; k++)
		{
			tx = que[tail].x + next[k][0];
			ty = que[tail].y + next[k][1];
			if (tx < 1 || tx > n || ty <1 || ty > m)
			{
				continue;
			}
			if (a[tx][ty] == 0 && book[tx][ty] == 0)//判断是障碍物还是已经在活动
			{
				book[tx][ty] = 1;
				que[tail].x = tx;
				que[tail].y = ty;
				que[tail].step = que[head].step + 1;
				tail++;
			}
			if (tx == p && ty == q)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			break;
		}
		head++;
	}
	printf("%d", que[tail - 1].step);

	return 0;

}



/*
 深度优先搜素
 int n, m, p, q, min = 99999999;
int a[51][51];
int book[51][51];


void dfs(int x, int y, int step) // 解决当前怎么办
{
	int next[4][2] = {  {0,1},
						{1,0},
						{0,-1},
						{-1,0}};
	int ty, tx , k;  //next 下一步的坐标
	//临界条件
	if (x == p && y == q)
	{
		if (step < min)
		{
			min = step;
		}
		return;
	}
	for (k = 0; k <= 3; k++)
	{
		tx = x + next[k][0];
		ty = y + next[k][1];
		if (tx < 1 || tx > n || ty < 1 || ty > m)
		{
			continue;
		}
		if (a[tx][ty] == 0 && book[tx][ty] == 0)
		{
			book[tx][ty] = 1;
			dfs(tx, ty, step + 1);
			book[tx][ty] = 0;
		}
	}
	return;
}

int main()
{
	int startx, starty;
	scanf_s("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			scanf_s("%d", &a[i][j]);
	scanf_s("%d %d %d %d", &startx, &starty, &p, &q);

	book[startx][starty] = 1;
	dfs(startx, starty, 0);

	printf("%d\n", min);
	return  0;

}
*/

