#include<iostream>
#include<string>
#include<stack>
using namespace std;
 
//��׺���ʽת��׺���ʽ����
string change(const string str)
{
	stack<char> mystack;
	string strTarget;
	string ch = "+-*/()";
	string s = "0123456789+-*/()";
	string tempstr;
	int start, end;
	for (int i = 0; i < str.length(); i=end)
	{
		start = i;
		end = str.find_first_of(ch, i);//�϶���һ������
		if (start == end)
		{
			tempstr = str.substr(start, 1);
			end++;
		}
		else
		{
			if (end == -1)//����������������
			{
				end = str.length();
			}
			tempstr = str.substr(start, end - start);
		}
 
		if (tempstr == "(")//������
		{
			char c = '(';
			mystack.push(c);
		}
		else if(tempstr ==")" )//������
		{
			while ( mystack.top() != '(')
			{
				strTarget += mystack.top();
				//strTarget += " ";
				mystack.pop();
			}
			mystack.pop();//�����ų�ջ
		}
		else if ((tempstr == "+") || (tempstr == "-"))
		{
			while ((mystack.empty() != true) && (mystack.top() != '(') )
			{
				strTarget += mystack.top();
				//strTarget += " ";
				mystack.pop();
			}
			char c = tempstr[0];
			mystack.push(c);
		}
		else if ((tempstr == "*") || (tempstr == "/"))
		{
			while ((mystack.empty() != true) && ((mystack.top() == '*') || (mystack.top() == '/')))
			{
				strTarget += mystack.top();
				//strTarget += " ";
				mystack.pop();
			}
			char c = tempstr[0];
			mystack.push(c);
		} 
//         else if(mystack.top() == '#')
//         {
//             mystack.pop();
//         }
		else//����
		{
			strTarget += tempstr;
			//strTarget += " ";
		}
	}
	while (mystack.empty() != true)
	{
		strTarget += mystack.top();
		//strTarget += " ";
		mystack.pop();
	}
	return strTarget;
}
 
 
int main()
{
	string  str = "";
//    int i=0 , j=0;
	string ans;//��������ת����ĺ�׺���ʽ
	//getline(cin, str);
    int i;
	char ch;
	while((ch = getchar())!='#')
	{
		str += ch;
	}

    //cout << str << endl;
	ans = change(str);
	cout << ans << endl;
	system("pause");
	return 0;
}
