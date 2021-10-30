#include<iostream>
#include<cstdio>
#include<stack>//栈
using namespace std; 
#define len 10000
char zhong[len+1];//中缀
char hou[2*len+1];//后缀
bool isnumber(char a)//判断是否为数字
{
	if('0'<=a && a<='9')//数字 0~9
		return true;
		else
			return false;
}
bool isoperator(char a)//判断是否为运算符
{
	if(a=='+' || a=='-' || a=='*' || a=='/')
		return true;
	else
		return false;
}
bool priority(char a,char b)//判断优先级
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
	}//乘号和除号的标记2 加号和减号的标记为1
	if(x>=y)//比较优先级 
		return true;
	else
		return false;
}
//中缀转后缀 
void function()
{
	stack<char> op;//运算符栈
	while(op.empty()==false)//如果栈不是空的
	op.pop();//入栈
	int k=0;
	hou[k]='\0';//后缀
	for(int i=0;zhong[i];i++)//中缀数组
	{
		if(isnumber(zhong[i]))
			{
				hou[k++]=zhong[i];//遇到数字直接输出到后缀数组
				if(!isnumber(zhong[i+1]))//当中缀表达式中下一个数不是数字时
					hou[k++]=' ';//输入空格
			}
			else if(zhong[i]=='(')//遇到左括号
				{
					op.push(zhong[i]);
				}
				else if(zhong[i]==')')//遇到右括号
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
							if(op.empty())//栈为空时直接入栈
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
	stack<double> num;//操作数栈
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

