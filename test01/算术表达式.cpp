#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXSIZE 50
typedef struct {
	char elem[MAXSIZE];
	int top;
}SeqStack1;
typedef struct {
	int elem[MAXSIZE];
	int top;
}SeqStack2;
void Pushnumber(SeqStack2* s, int x)
{
	if (s->top == MAXSIZE - 1)
		;
	else
	{
		s->top++;
		s->elem[s->top] = x;
	}
}
void Pushfuhao(SeqStack1* s, char x)
{
	if (s->top == MAXSIZE - 1)
		;
	else
	{
		s->top++;
		s->elem[s->top] = x;
	}
}
void Popnumber(SeqStack2* s, int* x)
{
	if (s->top == -1)
		;
	else
	{
		*x = s->elem[s->top];
		s->top--;
	}
}
void Popfuhao(SeqStack1* s, char* x)
{
	if (s->top == -1)
		;
	else
	{
		*x = s->elem[s->top];
		s->top--;
	}
}
int Gettopnumber(SeqStack2* a)
{
	if (a->top == -1)
		return 0;
	else
	{
		return a->elem[a->top];
	}
}
char Gettopfuhao(SeqStack1* a)
{
	if (a->top == -1)
		return NULL;
	else
	{
		return a->elem[a->top];
	}
}
int weizhi(char a)
{
	switch (a)
	{
	case '+':
		return 0; break;
	case '-':
		return 1; break;
	case '*':
		return 2; break;
	case '/':
		return 3; break;
	case '(':
		return 4; break;
	case ')':
		return 5; break;
	case '#':
		return 6; break;
	}
}
char compare(char ah, char bh)
{
	char a[7][7] = { {'>','>','<','<','<','>','>'},
 {'>','>','<','<','<','>','>'},
 {'>','>','>','>','<','>','>'},
 {'>','>','>','>','<','>','>'},
 {'<','<','<','<','<','=',' '},
 {'>','>','>','>',' ','>','>'},
 {'<','<','<','<','<',' ','='}
	};
	return a[weizhi(ah)][weizhi(bh)];
}
int main()
{
	SeqStack1* OPTR = (SeqStack1*)malloc(sizeof(SeqStack1));
	SeqStack2* OPRD = (SeqStack2*)malloc(sizeof(SeqStack2));
	OPTR->top = -1;
	OPRD->top = -1;
	int data;
	char ch;
	Pushfuhao(OPTR, '#');
	ch = getchar();
	while (ch != '#' || Gettopfuhao(OPTR) != '#')
	{
		if (ch >= '0' && ch <= '9')
		{
			data = ch - '0';
			ch = getchar();
			while (ch >= '0' && ch <= '9')
			{
				data = data * 10 + ch - '0';
				ch = getchar();
			}
			Pushnumber(OPRD, data);
		}
		else
		{
			char x, op;
			int q1, q2, val;
			switch (compare(Gettopfuhao(OPTR), ch))
			{
			case '<':Pushfuhao(OPTR, ch);
				ch = getchar(); break;
			case '=':Popfuhao(OPTR, &x);
				ch = getchar(); break;
			case '>':Popfuhao(OPTR, &op);
				Popnumber(OPRD, &q2);
				Popnumber(OPRD, &q1);
				if (op == '+')
					val = q1 + q2;
				else if (op == '-')
					val = q1 - q2;
				else if (op == '*')
					val = q1 * q2;
				else
					val = q1 / q2;
				Pushnumber(OPRD, val);
				break;
			}

		}
	}
	printf("%d", Gettopnumber(OPRD));
	free(OPRD);
	free(OPTR);
	return 0;
}
