#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int DataType;
typedef struct node
{
    DataType  data;
    struct node* next;
}LNode, * CirLinkQueue;

//���еĻ���������������
CirLinkQueue InitQueue();  //��ʼ�����У�����ֵΪ���е�βָ�롣
int IsEmptyQueue(CirLinkQueue Q); //�����пգ���Ϊ�գ��򷵻�1���ǿգ�����0��
int EnQueue(CirLinkQueue* Q, DataType x);  //  Ԫ��x��ӣ��������ɹ����򷵻�1������ʧ�ܣ��򷵻�0��
int DelQueue(CirLinkQueue* Q, DataType* x);  //  ����һ��Ԫ�أ��������ɹ����򷵻�1������ʧ�ܣ��򷵻�0��
void DestroyQueue(CirLinkQueue Q);

int main(void)
{
    char cmd[20];
    CirLinkQueue pQueue = InitQueue();
    DataType x;
    scanf("%s", cmd);
    while (strcmp(cmd, "END") != 0)
    {
        if (strcmp(cmd, "ENQUEUE") == 0)
        {
            scanf("%d", &x);
            if (EnQueue(&pQueue, x) == 0)
                printf("FULL QUEUE!\n");
        }
        else if (strcmp(cmd, "DELQUEUE") == 0)
        {
            if (DelQueue(&pQueue, &x) == 0)
                printf("EMPTY QUEUE!\n");
            else
                printf("%d\n", x);
        }
        else if (strcmp(cmd, "ISEMPTY") == 0)
        {
            if (IsEmptyQueue(pQueue) == 0)
                printf("NOT EMPTY\n");
            else
                printf("EMPTY\n");
        }
        scanf("%s", cmd);
    }
    DestroyQueue(pQueue);
    return 0;
}

void DestroyQueue(CirLinkQueue Q)
{
    LNode* p, * t;
    p = Q; Q = Q->next;
    p->next = NULL;
    p = Q->next;
    while (p)
    {
        printf("%d ", p->data);
        t = p->next;
        free(p);
        p = t;
    }
    free(Q);
}

/* ����������д�� 
//���еĻ���������������
CirLinkQueue InitQueue();  //��ʼ�����У�����ֵΪ���е�βָ�롣
int IsEmptyQueue(CirLinkQueue Q); //�����пգ���Ϊ�գ��򷵻�1���ǿգ�����0��
int EnQueue(CirLinkQueue* Q, DataType x);  //  Ԫ��x��ӣ��������ɹ����򷵻�1������ʧ�ܣ��򷵻�0��
int DelQueue(CirLinkQueue* Q, DataType* x);  //  ����һ��Ԫ�أ��������ɹ����򷵻�1������ʧ�ܣ��򷵻�0��
void DestroyQueue(CirLinkQueue Q);
*/

//-----------------------------------------------------------------------------------------

int DelQueue(CirLinkQueue* Q, DataType* x)
{
    if (IsEmptyQueue(*Q)) {
        return 0;
    }
    CirLinkQueue q = *Q;
    if (q->next->next == q) {//ֻʣ���һ�����
        *Q = q->next;
        *x = q->next->next->data;
        q->next->next = q->next->next->next;
    }
    else {
        *x = q->next->next->data;
        q->next->next = q->next->next->next;
    }
    return 1;
   
}

//------------------------------------------------------------------------------------

int EnQueue(CirLinkQueue* Q, DataType x)
{
    CirLinkQueue R = (CirLinkQueue)malloc(sizeof(LNode));
    if (R == NULL)
    {
        return 0;
    }
    R->data = x;
    R->next = (*Q)->next;
    (*Q)->next = R;
    (*Q) = R;
    return 1;
}


//-------------------------------------------------------------------------------------

int IsEmptyQueue(CirLinkQueue Q)
{
    CirLinkQueue R = Q;
    if (R->next == R)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//--------------------------------------------------------------------------------------

CirLinkQueue InitQueue()
{
    CirLinkQueue R = (CirLinkQueue)malloc(sizeof(LNode));
    if (R != NULL)
    {
        R->data = 0;
        R->next = R;
        return R;
    }
    else
    {
        printf("Memory allocate is errir! ");
        exit(0);
    }
}