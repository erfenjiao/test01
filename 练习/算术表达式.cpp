#include<iostream>
#include<cstdio>
#include<stack>//ջ
using namespace std; 
#define len 10000
char zhong[len+1];//��׺
char hou[2*len+1];//��׺
bool isnumber(char a)//�ж��Ƿ�Ϊ����
{
	if('0'<=a && a<='9')//���� 0~9
		return true;
		else
			return false;
}
bool isoperator(char a)//�ж��Ƿ�Ϊ�����
{
	if(a=='+' || a=='-' || a=='*' || a=='/')
		return true;
	else
		return false;
}
bool priority(char a,char b)//�ж����ȼ�
{
	int x,y;
	switch(a)
	{
		case '*':
		case '/':
            x=2;break;
		case '+':
		case '-':
            x=1;break;		
	}
	switch(b)
	{
		case '*':
		case '/':
            y=2;break;
		case '+':
		case '-':
            y=1;break;
	}//�˺źͳ��ŵı��2 �Ӻźͼ��ŵı��Ϊ1
	if(x>=y)//�Ƚ����ȼ� 
		return true;
	else
		return false;
}
//��׺ת��׺ 
void function()
{
	stack<char> op;//�����ջ
	while(op.empty()==false)//���ջ���ǿյ�
	op.pop();//��ջ
	int k=0;
	hou[k]='\0';//��׺
	for(int i=0;zhong[i];i++)//��׺����
	{
		if(isnumber(zhong[i]))
			{
				hou[k++]=zhong[i];//��������ֱ���������׺����
				if(!isnumber(zhong[i+1]))//����׺���ʽ����һ������������ʱ
					hou[k++]=' ';//����ո�
			}
			else if(zhong[i]=='(')//����������
				{
					op.push(zhong[i]);
				}
				else if(zhong[i]==')')//����������
					{
						while(op.top()!='(')
						{
							hou[k++]=op.top();
							hou[k++]=' ';
							op.pop();
						}op.pop();
					}
					else if(isoperator(zhong[i]))
						{
							if(op.empty())//ջΪ��ʱֱ����ջ
								op.push(zhong[i]);
								else
									{
										while(priority(op.top(),zhong[i]))
										{
											hou[k++]=op.top();
											hou[k++]=' ';
											op.pop();
											if(op.empty())
												break;
										}
										op.push(zhong[i]);
									}
						}
	}
	while(!op.empty())
	{
		hou[k++]=op.top();
		hou[k++]=' ';
		op.pop();
	}
	hou[k-1]='\0';
}
double jisuan1(double a,char op,double b)
{
	switch(op)
	{
		case '+':return a+b;
			case '-':return a-b;
				case '*':return a*b;
					case '/':return a/b;
	}
}
double res()
{
	function();
	stack<double> num;//������ջ
	while(num.empty()==false)
	num.pop();
	double x=0;
	double a,b,ans=0;
	for(int i=0;hou[i];i++)
	{
		if(hou[i]==' ') continue;
			else if(isnumber(hou[i]))
				{
					if(isnumber(hou[i+1]))
						x=x*10+hou[i]-'0';
						else
							{
								x=x*10+hou[i]-'0';
								num.push(x);
								x=0;
							}
				}
				else
					{
						b=num.top();num.pop();
						a=num.top();num.pop();
						ans=jisuan1(a,hou[i],b);
						num.push(ans); 
					}
	}
	return ans;
}
int main()
{
	while(~scanf("%s",zhong))
	{
		printf("%.0lf\n",res());
	}
	return 0;
	}

