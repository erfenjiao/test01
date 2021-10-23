#include<stdio.h>
int main()
{
	/*请找出以下代码的问题，说明原因并修改*/
	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char** cp[] = { c + 3, c + 2, c + 1, c };
	char*** cpp = cp;

	printf("%s\n", **++cpp);         //POINT
	printf("%s\n", *-- * ++cpp + 3);   //ER
	printf("%s\n", *cpp[-2] + 3);    //ST
	printf("%s\n", cpp[-1][-1] + 1); //EW

	/*
	* 正确版本：https://blog.csdn.net/iBreatheBSB/article/details/38275065   原因见一下博客
	const char * c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	const char** cp[] = { c + 3, c + 2, c + 1, c };
	const char*** cpp = cp;

	printf("%s\n", **++cpp);         //POINT
	printf("%s\n", *-- * ++cpp + 3);   //ER
	printf("%s\n", *cpp[-2] + 3);    //ST
	printf("%s\n", cpp[-1][-1] + 1); //EW

	*/

}