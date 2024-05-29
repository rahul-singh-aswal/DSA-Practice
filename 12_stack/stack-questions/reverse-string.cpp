#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "rahul";

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    while (!s.empty())
    {
        char ch = s.top();
        ans = ans + ch;
        s.pop();
    }

    cout << "oringinal string : " << str << endl;
    cout << "reversed string : " << ans << endl;

    return 0;
}