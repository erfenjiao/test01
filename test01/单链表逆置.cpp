#include<stdio.h>
#include<stdlib.h>
typedef int DataType;
typedef struct node
{
    DataType data;
    struct node* next;
}LNode, * LinkList;

LinkList CreatList();
void PrintList(LinkList head);
void Reverse(LinkList head);

int main()
{
    LinkList q;
    q = CreatList();
    Reverse(q);
    PrintList(q);
}


LinkList  CreatList()
{
    LinkList h = (LinkList)malloc(sizeof(LNode));
    LNode* p, * tail = h;
    int n;
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
    {
        p = (LNode*)malloc(sizeof(LNode));
        scanf_s("%d", &(p->data));
        tail->next = p;
        tail = p;
    }
    tail->next = NULL;
    return h;
}
void PrintList(LinkList head)
{
    LNode* p = head->next;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}


/* 请在这里填写答案 */
void Reverse(LinkList head)
{
    LNode* p, * q;
    p = head->next;
    head->next = NULL;
    while (p)
    {
        q = p;
        p = p->next;
        q->next = head->next;
        head->next = q;
    }
}