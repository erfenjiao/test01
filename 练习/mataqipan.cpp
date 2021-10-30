#include <stdio.h>

#define TRUE 1
#define ERROR 0
int chess[9][9];//һ��8*8������

int nextxy(int *x, int *y, int count)  /*�ҵ�����x,yλ�õ���һ�����ߵ�λ�ã�count��0��7���е�һ��λ��*/
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

//�����������ߵ�λ�þͷ���1�����ܾͷ���0

int TravelChessBoard(int x, int y, int tag)  /*�������������"��̤����"*/
{
    int x1=x, y1=y, flag=0, count=0;
    chess[x][y]=tag;
    if(tag == 8*8)
    {
        return 1;
    } //������ߵ����һ��λ����64����ô�Դ�ϲ��������

    flag=nextxy(&x1, &y1, count);//�����������ߵ�λ�þͷ���1�����ܾͷ���0

    //��Ѱ��һ�����ߵ�λ��
    while(flag==0 && count<7)
    {
        count=count+1;
        flag=nextxy(&x1, &y1, count);
    }
//flag=1,count<7 ����ѭ��
    while(flag)
    {
        if(TravelChessBoard(x1, y1, tag+1))
            return 1;
        x1=x;
        y1=y;
        count=count+1;
        flag=nextxy(&x1, &y1, count);  /*Ѱ����һ��(x,y)*/
        while(flag==0 && count<7)
        {  /*ѭ����Ѱ����һ��(x,y)*/
            count=count+1;
            flag=nextxy(&x1, &y1, count);
        }
    }
//flag==0 ˵�������count>=7,Ҳ����û�ҵ�������λ��
    if(flag == 0)
        chess[x][y]=0;
    return 0;
}
int main()
{
    int i, j;
//��ʼ������
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
