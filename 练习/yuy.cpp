#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

/*ջ*/
template <class T>
class CStack
{
    public:
         int m_count;
         T * m_arr;
         int m_curposition;
         CStack(int count)
         {
              m_arr = new T [count];
              m_count = count;
              m_curposition = -1;
         }
         bool push(T val)
         {
              if(m_curposition == m_count-1)
                  return false;
              m_arr[++m_curposition] = val;
         }
         T pop()
         {
              if(IsEmpty())
                    return 0;
              return m_arr[m_curposition--];
         }
         T GetElement()
         {
              if(IsEmpty())
                  return 0;
              return m_arr[m_curposition];
         }
         bool IsEmpty()
         {
              if(m_curposition < 0)
                  return true;
              return false;
         }
         ~CStack()
         {
                delete [] m_arr;
         }
};

/* ������������ */
bool ExpressionIsRight(char * pExpression);  // ���ʽ�Ƿ���ȷ
bool ProcessExpression(char * pExpression);  // ������ʽ
int  GetIndex(char ch);                      // ��ȡ�������������е��±�
void Calculate();                            // ����
double GetResult();                          // �õ����
bool IsEnd(char ch);                         // ���ʽ�Ƿ����
double GetNum(char *pStr, int & i);          // ��ȡ������

CStack<char>     stack_sign(100);  // �����ջ
CStack<double>   stack_num(100);   // ������ջ

//����������ȼ���
int PriTbl[7][7]={
    {1,1,-1,-1,-1,1,1}, 
    {1,1,-1,-1,-1,1,1},
    {1,1,1,1,-1,1,1},
    {1,1,1,1,-1,1,1},
    {-1,-1,-1,-1,-1,0,2},
    {1,1,1,1,2,1,1},
    {-1,-1,-1,-1,-1,2,0}
};
int main()
{
     char strExpression[100];
     //cout << "�������������ʽ��" << endl;
     cin >> strExpression;   // ������ʽ
     if(!ProcessExpression(strExpression)) // ������ʽ
     {
            cout << "line-80:���ʽ����" << endl;
     }
     else
            //cout << "��������" << GetResult() << endl;  // ������
            cout <<  GetResult() << endl; 

}

bool ExpressionIsRight(char * pExpression)  // ���ʽ�Ƿ���ȷ
{
     int len = strlen(pExpression);
     char arr[7] = {'+','-','*','/','(',')','.'};

     for(int i=0; i<len; i++)
     {
          if(!(pExpression[i]>='0' && pExpression[i]<='9'))
          {
               if(pExpression[0] == '.' || pExpression[len-1] == '.')
                    return false;
               int flag = 0;
               for(int j=0; j<sizeof(arr); j++)
               {
                    if(pExpression[i] == arr[j])
                    {
                         flag = 1;
                         break;
                    }
               }
               if(flag == 0)
                    return false;
           }
       }
     return true;
}

bool ProcessExpression(char * pExpression)
{
     if(!ExpressionIsRight(pExpression))
         return false;
     int len = strlen(pExpression);
     //pExpression[len++] = '#';
     //stack_sign.push('#');
     if(len == 1)
        return false;
     for(int i=0; i<len; i++)
     {
          if(pExpression[i] >= '0' && pExpression[i] <= '9') // ������
          {
               double val = GetNum(pExpression, i);
               stack_num.push(val);
          }
      else // ������
      {
           int pre  = GetIndex(stack_sign.GetElement());
           int next = GetIndex(pExpression[i]);
           switch(PriTbl[pre][next])
           {
                case -1:        // next > pre
                     stack_sign.push(pExpression[i]);
                     break;
                case 0:         // next = pre
                     if(IsEnd(pExpression[i]))
                      return true;
                     stack_sign.pop();
                     break;
                case 1:         // next < pre
                     Calculate();
                     i--;     // back
                     break;
            }
        }
     }
    return true;
}

double GetNum(char *pStr, int & i)
{
     char Nums[100];
     int j = 0;
     while((pStr[i] >= '0' && pStr[i] <= '9') || pStr[i]=='.')
            Nums[j++] = pStr[i++];
     i--;
     Nums[j] = '\0';
     return atof(Nums);
}

int GetIndex(char ch)              
{
    switch(ch)
    {
       case '+': return 0;
       case '-': return 1;
       case '*': return 2;
       case '/': return 3;
       case '(': return 4;
       case ')': return 5;
       case '#': return 6;
    }
}

void Calculate()               
{
     double num1, num2;
     num2 = stack_num.pop();
      if(stack_num.IsEmpty())
      {
            cout << "���ʽ����" << endl;
            exit(0);
      }
      num1 = stack_num.pop();
         switch(stack_sign.pop())
         {
            case '+': stack_num.push(num1+num2);    return;
            case '-': stack_num.push(num1-num2);    return;
            case '*': stack_num.push(num1*num2);    return;
            case '/':
            {
                if(num2 == 0)
                {
                     cout << "��������Ϊ0��������ֹ��" << endl;
                     exit(0);
                }
                stack_num.push(num1/num2);
                return;
             }
     }
}

bool IsEnd(char ch)
{
     if(ch == '#')
          if(stack_sign.GetElement() == ch)
                 return true;
     return false;
}

double GetResult()
{
     if(stack_sign.GetElement() != '#')
     {
            cout << "line-220:���ʽ����" << endl;
            exit(0);
     }
     return stack_num.GetElement();
}
