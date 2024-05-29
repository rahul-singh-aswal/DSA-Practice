#include <bits/stdc++.h>
using namespace std;

int main()
{
    // create a queue
    queue<int> q;

    // insert element in queue
    q.push(11);
    cout << "Front of q is : " << q.front() << endl;

    q.push(15);
    cout << "Front of q is : " << q.front() << endl;

    q.push(7);
    cout << "Front of q is : " << q.front() << endl;

    cout << "Size of queue : " << q.size() << endl;

    q.pop();
    cout << "Front of q is : " << q.front() << endl;

    cout << "Size of queue : " << q.size() << endl;

    if (q.empty())
    {
        cout << "Queue is empty" << endl;
    }

    else
    {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}