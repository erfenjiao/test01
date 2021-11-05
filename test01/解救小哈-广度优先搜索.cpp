#include<stdio.h>
//广度优先搜索-使用队列进行模拟
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
	int a[51][51] = { 0 };
	int book[51][51] = { 0 };
	int next[4][2] = { (0,1),(1,0),(0,-1),(-1,0) };
	int head, tail;
	int i, j, k, n, m, startx, starty, p, q, tx, ty, flag;

	scanf_s("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	scanf_s("%d %d %d %d", &startx, &starty, &p, &q);

	//队列初始化
	head = 1;
	tail = 1;
	que[tail].x = startx;
	que[tail].y = starty;
	tail++;
	book[startx][starty] = 1;

	flag = 0;
	//当队列不为空时循环
	while (head < tail)
	{
		for (k = 0; k < 4; k++)
		{
			tx = que[head].x + next[k][0];
			ty = que[head].y + next[k][1];
			if (tx<1 || tx>n || ty<1 || ty>n)
			{
				continue;
			}
			if (a[tx][ty] == 0 || book[tx][ty] == 0)
			{
				book[tx][ty] = 1;
				que[tail].x = tx;
				que[tail].y = ty;
				que[tail].f = head;
				que[tail].step = que[head].step + 1;
				tail++;				
			}
			if (tx == p || ty == q)
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


/*深搜
int a[51][51], book[51][51];
int n, m, p, q, min = 99999;
void dfs(int x, int y, int step)
{
	int next[4][2] = { (0,1) , (1,0) , (0,-1) , (-1,0) };
	int tx, ty , k;

	if (x == p || y == q)
	{
		if (step < min)
		{
			min = step;
		}
		return;
	}
	for (k = 0; k < 4; k++)
	{
		tx = x + next[k][0];
		ty = y + next[k][1];
		if (tx<1 || tx>n || ty<1 || ty>n)
		{
			continue;
		}
		if (a[tx][ty] == 0 || book[tx][ty] == 0)
		{
			book[tx][ty] == 1;
			dfs(tx, ty, step+1);
			book[tx][ty] = 0;
		}
	}
	return;
}
*/

