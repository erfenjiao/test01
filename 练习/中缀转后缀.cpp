#include<iostream>
#include<string>
#include<stack>
using namespace std;
 
//中缀表达式转后缀表达式函数
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
		end = str.find_first_of(ch, i);//肯定是一个符号
		if (start == end)
		{
			tempstr = str.substr(start, 1);
			end++;
		}
		else
		{
			if (end == -1)//处理遍历到最后的情况
			{
				end = str.length();
			}
			tempstr = str.substr(start, end - start);
		}
 
		if (tempstr == "(")//左括号
		{
			char c = '(';
			mystack.push(c);
		}
		else if(tempstr ==")" )//右括号
		{
			while ( mystack.top() != '(')
			{
				strTarget += mystack.top();
				//strTarget += " ";
				mystack.pop();
			}
			mystack.pop();//右括号出栈
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
		else//数字
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
	string ans;//用来接受转换后的后缀表达式
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
