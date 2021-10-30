#include <stdio.h>

#define TRUE 1
#define ERROR 0
int chess[9][9];//一个8*8的棋盘

int nextxy(int *x, int *y, int count)  /*找到基于x,y位置的下一个可走的位置，count是0到7其中的一个位置*/
{
    switch(count)
    {
        case 1:  
            if(*y+2 <= 8 && *x-1 >= 1 && chess[*x-1][*y+2]==0)  //(-1 , 2)
            {  
                *y+=2;  
                *x-=1;  
                return TRUE;  
            }  
            break;  
        case 2:  
            if(*y+2 <= 8 && *x+1 <= 8 && chess[*x+1][*y+2]==0)  //(1 , 2)
            {  
                *y+=2;  
                *x+=1;  
                return TRUE;  
            }  
            break;  
        case 3:  
            if(*y+1 <= 8 && *x+2 <= 8 && chess[*x+2][*y+1]==0)  //(2 , 1)
            {  
                *y+=1;  
                *x+=2;  
                return TRUE;  
            }  
            break;  
        case 4:  
            if(*y-1 >= 1 && *x+2  <= 8 && chess[*x+2][*y-1]==0)  //(2 , -1)
            {  
                *y-=1;  
                *x+=2;  
                return TRUE;  
            }  
            break;  
        case 5:  
            if(*y-2 >= 1 && *x+1<=8 && chess[*x+1][*y-2]==0)  //(1 , -2)
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
            if(*y+1 <= 8 && *x-2 >= 1 && chess[*x-2][*y+1] == 0)  //(-2 , 1)
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

//所以马有能走的位置就返回1，不能就返回0

int TravelChessBoard(int x, int y, int tag)  /*深度优先搜索地"马踏棋盘"*/
{
    int x1=x, y1=y, flag=0, count=0;
    chess[x][y]=tag;
    if(tag == 8*8)
    {
        return 1;
    } //如果马走的最后一个位置是64，那么皆大欢喜，结束了

    flag=nextxy(&x1, &y1, count);//所以马有能走的位置就返回1，不能就返回0

    //找寻这一步能走的位置
    while(flag==0 && count<7)
    {
        count=count+1;
        flag=nextxy(&x1, &y1, count);
    }
//flag=1,count<7 跳出循环
    while(flag)
    {
        if(TravelChessBoard(x1, y1, tag+1))
            return 1;
        x1=x;
        y1=y;
        count=count+1;
        flag=nextxy(&x1, &y1, count);  /*寻找下一个(x,y)*/
        while(flag==0 && count<7)
        {  /*循环地寻找下一个(x,y)*/
            count=count+1;
            flag=nextxy(&x1, &y1, count);
        }
    }
//flag==0 说明上面的count>=7,也就是没找到能跳的位置
    if(flag == 0)
        chess[x][y]=0;
    return 0;
}
int main()
{
    int i, j;
//初始化棋盘
    for(i=1; i<=8; i++)
        for(j=1; j<=8; j++)
            chess[i][j]=0;
            
    if(TravelChessBoard(4, 1, 1))
    {
        for(i=1; i<=8; i++)
        {
            for(j=1; j<=8; j++)
                printf("%2d ", chess[i][j]);
            printf("\n");
        }
        printf("The horse has travelled the chess borad\n");
    }
    else
        printf("The horse cannot travel the chess board\n");
    return 0;
}
