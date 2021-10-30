#include <stdio.h>
#include <stdlib.h>

#define MATRIX 8
#define TRUE 1
#define ERROR 0
/*打印棋盘*/
void print_chess(int (*chess)[MATRIX])
{
    int i ,j ;
    //printf("\nThe MATRIX is as follow\n");
    for(i = 1;i <= MATRIX;i++)
    {
        for(j = 1;j <= MATRIX;j++)
        {
            printf("%2d\t",chess[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int i ,j;
    //int start ,end;
    int chess[MATRIX][MATRIX];  //8 8
    for(i = 1; i <= MATRIX;i++)
    {
        for(j = 1;j <= MATRIX;j++)
        {
            chess[i][j] = 0;  //初始化
        }
    }
    
    print_chess(chess);  //打印棋盘
    //printf("共耗时:%f\n",(double)(end-start)/CLOCKS_PER_SEC); 

}

