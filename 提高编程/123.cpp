#include<stdio.h>
int ver = 123;
void func1(int ver)
{
	ver++;
	printf("func1:ver = %d\n", ver);
}

//void func2(int* pr)
//{
//	*pr = 1234;
//	printf("func2:*pr = %d\n", *pr);
//	pr = 5678;
//	printf("func2:ver = %d\n", ver);
//}

int main()
{
	int a = 0;
	int ver = 1234;
	for (a = 3; a < 4; a++)
	{
		static int a = 5;
		printf("main:a = %d\n", a);
		a = ver;
		func1(ver);
		int ver = 7;
		printf("main:ver = %d\n", ver);
		//func2(&ver);
	}
	printf("a = %d\tver = %d\n", a, ver);
}
