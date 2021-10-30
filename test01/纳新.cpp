#include<stdio.h>
#include<string>

int main()
{
	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int(*b)[3] = a;
	++b;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d  ", b[i][j]);
		}
		printf("\n");
	}
	b[1][1] = 10;
	int* ptr = (int*)(&a + 1);
	//printf("a[2][1] = %d\n**(a+1) = %d\n*(ptr-1) = %d\n", a[2][1], **(a + 1), *(ptr - 1));
	/*for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}*/
}

/*
-----4------
#include<stdio.h>
int ver = 123;
void func1(int ver)
{
	ver++;
	printf("func1:ver = %d\n", ver);
}

void func2(int* pr)
{
	*pr = 1234;
	printf("func2:*pr = %d\n", *pr);
	*pr = 5678;
	printf("func2:ver = %d\n", ver);
}

int main()
{
	int a = 0;
	int ver = 1234;
	for (int a = 3; a < 4; a++)
	{
		//static int a = 5;
		printf("main:a = %d\n", a);
		a = ver;
		func1(ver);
		int ver = 7;
		printf("main:ver = %d\n", ver);
		func2(&ver);
	}
	printf("a = %d\tver = %d\n", a, ver);

-----------------------6-------------------------------
     
void func()
{
	short a = 2;
	unsigned int b = 1;
	b += a;
	int c = -1;
	unsigned short d = c * 256;
	c <<= 4;
	int e = 2;
	e = ~e | 6;
	d = (d & 0xff) + 0x2022;
	printf("a = 0x%hx\tb = 0x%x\td = 0x%hx\te = 0x%x\n", a, b, d, e);
	printf("c = 0x%hhx\t\n", (signed char)c);
}
int main()
{
	func();
}
}*/