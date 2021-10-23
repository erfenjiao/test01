#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution 
{
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        if (m == 0)
        {
            return 0;
        }
        vector<int> pi(m);
        for (int i = 1, j = 0; i < m; i++)
        {
            while (j > 0 && needle[i] != needle[j])
            {
                j = pi[j - 1];
                cout << "j = " << j << endl;
                cout << "pi[j-1] = " << pi[j-1] <<  endl;
            }
            if (needle[i] == needle[j])
            {
                j++;
            }
            pi[i] = j;
            cout << "i = " << i << endl;
            cout << "j = " << j << endl;
            cout << "neddld[i] = " << needle[i] << endl;
            cout << "neddld[j] = " << needle[j] << endl;
            cout << "pi[i] = " << pi[i] << endl;
            cout << endl;
        }
        for (int i = 0, j = 0; i < n; i++)
        {
            while (j > 0 && haystack[i] != needle[j])
            {
                j = pi[j - 1];
            }
            if (haystack[i] == needle[j])
            {
                j++;
            }
            if (j == m)
            {
                return i - m + 1;
            }
        }
        return -1;
    }

};

int main()
{
    Solution s;
    string s1, s2;
    cin >> s1;
    cin >> s2;
    cout << s.strStr(s1, s2) << endl;
}