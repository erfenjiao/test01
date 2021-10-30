/*
整数溢出问题
分为无符号整数溢出和有符号
有符号又分为向上溢出和向下溢出


*/
#include<stdio.h>
int main()
{
	//char x;
	//x = 125 + 5;
	//printf("%d\n", x);
	/*
	signed char,正整数最大值为127，负整数最小值为128
	x = -126  
	130的二进制位为10000010，符号为1，表示负数。
	对于有符号整型，负数是用补码表示的，即绝对值取反后加一。
	根据之前方法逆向回去，先减一后再取反得01111110，即126.所以10000010表示的是-126
	*/
	char * c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char** cp[] = { c + 3, c + 2, c + 1, c };
	char*** cpp = cp;

	printf("%s\n", **++cpp);         //POINT
	printf("%s\n", *-- * ++cpp + 3);   //ER
	printf("%s\n", *cpp[-2] + 3);    //ST
	printf("%s\n", cpp[-1][-1] + 1); //EW

}
