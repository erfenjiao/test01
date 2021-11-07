#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
typedef int ElemType;
typedef struct
{
    ElemType elem[MAXSIZE];
    int length;
}SeqList;

SeqList* CreatList();
void PrintList(SeqList* q);
void reverse(SeqList* q);

int main()
{
    SeqList* q;
    q = CreatList();
    reverse(q);
    PrintList(q);
}

SeqList* CreatList()
{
    SeqList* sq = (SeqList*)malloc(sizeof(SeqList));
    scanf_s("%d", &(sq->length));
    for (int i = 0; i < sq->length; i++)
    {
        scanf_s("%d", &(sq->elem[i]));
    }
    return sq;
}
void PrintList(SeqList* sq)
{
    for (int i = 0; i < sq->length; i++)
        printf("%d ", sq->elem[i]);
}

/* 请在这里填写答案 */
void reverse(SeqList* q)
{
    ElemType temp;
    for (int i = 0; i < q->length/2; i++)
    {
        temp = q->elem[i];
        q->elem[i] = q->elem[q->length - i - 1];
        q->elem[q->length - i - 1] = temp;
    }

}