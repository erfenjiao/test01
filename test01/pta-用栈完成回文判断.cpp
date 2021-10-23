#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

#define Stack_Size 50
typedef char ElemType;
typedef struct
{
    ElemType  data[Stack_Size];  //50
    int  top;
}SeqStack;

//栈的基本操作函数定义
SeqStack* InitStack();  //栈初始化
int IsEmpty(SeqStack* S); //栈判空
int IsFull(SeqStack* S);  //栈判满
int Push(SeqStack* S, ElemType x);  //  入栈
int Pop(SeqStack* S, ElemType* x);  //  出栈
int GetTop(SeqStack* S, ElemType* x); // 取栈顶元素


int IsPalindrome(char s[]);  //判断字符串s是否回文。

int main()
{
    char s[20];
    scanf("%s", s);
    if (IsPalindrome(s))
        printf("It's Palidrome!\n");
    else
        printf("It's not Palidrome!\n");
}


SeqStack* InitStack()
{
    SeqStack* S;
    S = (SeqStack*)malloc(sizeof(SeqStack));
    S->top = -1;
    return S;
}
int IsEmpty(SeqStack* S)
{
    return(S->top == -1 ? TRUE : FALSE);
}
int IsFull(SeqStack* S)
{
    return(S->top == Stack_Size - 1 ? TRUE : FALSE);
}
int Push(SeqStack* S, ElemType x)
{
    if (S->top == Stack_Size - 1)
        return(FALSE);
    S->top++;
    S->data[S->top] = x;
    return(TRUE);
}
int Pop(SeqStack* S, ElemType* x)
{
    if (S->top == -1)
        return(FALSE);
    *x = S->data[S->top];
    S->top--;
    return(TRUE);
}
int GetTop(SeqStack* S, ElemType* x)
{
    if (S->top == -1)
        return(FALSE);
    *x = S->data[S->top];
    return(TRUE);
}

/* 请在这里填写答案 */
int IsPalindrome(char s[])
{
    SeqStack S;
    S.top = 0;
    int len = strlen(s);
    int mid = len / 2;
    int next;
    for (int i = 0; i < mid; i++)
    {
        S.data[S.top++] = s[i];
    }
    if (mid % 2 != 0)
    {
        next = mid + 1;
    }
    else
    {
        next = mid;
    }
    while (S.top != 0)
    {
        if (S.data[S.top - 1] == s[next])
        {
            S.top--;
        }
        else
        {
            break;
        }
    }
    if (S.top != 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}