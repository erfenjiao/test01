#include <stdio.h>
#include <stdlib.h>

#define MATRIX 8
#define TRUE 1
#define ERROR 0
typedef int status ;

int tag = 1;
/*查找下一步方向*/
status nextStep(int (*chess)[9],int *x,int *y,int step){ 
    switch(step)  
    {  
        case 1:  
            if(*y+2 <= MATRIX && *x-1 >= 1 && chess[*x-1][*y+2]==0)  //(-1 , 2)
            {  
                *y+=2;  
                *x-=1;  
                return TRUE;  
            }  
            break;  
        case 2:  
            if(*y+2 <= MATRIX && *x+1 <= MATRIX && chess[*x+1][*y+2]==0)  //(1 , 2)
            {  
                *y+=2;  
                *x+=1;  
                return TRUE;  
            }  
            break;  
        case 3:  
            if(*y+1 <= MATRIX && *x+2 <= MATRIX && chess[*x+2][*y+1]==0)  //(2 , 1)
            {  
                *y+=1;  
                *x+=2;  
                return TRUE;  
            }  
            break;  
        case 4:  
            if(*y-1 >= 1 && *x+2  <= MATRIX && chess[*x+2][*y-1]==0)  //(2 , -1)
            {  
                *y-=1;  
                *x+=2;  
                return TRUE;  
            }  
            break;  
        case 5:  
            if(*y-2 >= 1 && *x+1<=MATRIX && chess[*x+1][*y-2]==0)  //(1 , -2)
            {  
                *y-=2;  
                *x+=1;  
                return TRUE;  
            }  
            break;  
        case 6:  
            if(*y-2 >= 1 && *x-1 >= 1 && chess[*x-1][*y-2]==0)    //(-1 , -2)
            {  
                *y-=2;  
                *x-=1;  
                return TRUE;  
            }  
            break;  
        case 7:  
            if(*y-1 >= 1 && *x-2 >= 1 && chess[*x-2][*y-1]==0)  //(-2 , -1)
            {  
                *y-=1;  
                *x-=2;  
                return TRUE;  
            }  
            break;  
        case 0:  
            if(*y+1 <= MATRIX && *x-2 >= 1 && chess[*x-2][*y+1] == 0)  //(-2 , 1)
            {  
                *y+=1;  
                *x-=2;  
                return TRUE;  
            }  
            break;  
        default:  
            break;  
    }  
    return ERROR; 

}

/*DFS棋盘*/
void traverseChess(int (*chess)[9],int x,int y){

    int count = 0;  //最多8个方向计数
    int x1 = x,y1 = y;
    if(x1 <= MATRIX && y1 <= MATRIX && chess[x1][y1] == 0)
	{
        chess[x1][y1] = tag;
        tag ++;
    }

  for(count = 0 ; count < 8 ; count++)
  {  //总共有8个可能的方向
      nextStep(chess , &x1 , &y1 , count);
      if(chess[x1][y1] == 0)
      {
        	traverseChess(chess,x1,y1);  //递归
		}
    }
}
/*打印棋盘*/
void pri    traverseChess(chess,x1,y1);  //递归 int i ,j ;
    //printf("\nThe MATRIX is as follow\n");
    for(i = 1;i <= 8;i++)
    {
        for(j = 1;j <= 8;j++)
        {
            printf("%2d\t",chess[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int i ,j;
    int start ,end;
    int chess[9][9];  //8 8
    for(i = 1 ; i <= 8 ; i++)
    {
        for(j = 1;j <= 8;j++)
        {
            chess[i][j] = 0;  //初始化
        }
    }
    
    //start = clock();
    scanf("%d %d" , &start , &end);
    traverseChess(chess , start , end);  //开始遍历
    //traverseChess(chess,1,1);
    //end = clock();
    print_chess(chess);  //打印棋盘
    //printf("共耗时:%f\n",(double)(end-start)/CLOCKS_PER_SEC); 

}

