#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Creation of stack
    stack<int> s;

    // push operation
    s.push(2);
    s.push(7);

    // pop
    s.pop();

    // top element
    cout << "Top element : " << s.top() << endl;

    if (s.empty())
    {
        cout << "Stack is empty" << endl;
    }

    else
    {
        cout << "Stack is not empty" << endl;
    }

    cout << "Size of stack is " << s.size() << endl;

    return 0;
}