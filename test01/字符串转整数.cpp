#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int res = 0;
        int num;
        int i = 0;

        while (s[i] != '\0')
        {
            if (s[i] == ' ')
            {
                i++;
            }
            if (s[i] == '+')
            {
                sign = 1;
                i++;
            }
            else if (s[i] == '-')
            {
                sign = -1;
                i++;
            }
            else if (isdigit(s[i]))
            {
                num = s[i] - '0';
                if (res > INT_MAX / 10 || (res == INT_MAX && num > INT_MAX % 10))
                {
                    return INT_MAX;
                }
                if (res < INT_MIN / 10 || (res == INT_MIN && num < INT_MIN % 10))
                {
                    return INT_MIN;
                }

                //cout << num << endl;
                res = res * 10 + sign * num;
                i++;
            }
            else
            {
                cout << s[i] << endl;
                break;
            }
        }
        return res;
    }
    // return res;
};

int main()
{
	
	string s;
	cin >> s;
	
    Solution S;
    cout << S.myAtoi(s) << endl;
}