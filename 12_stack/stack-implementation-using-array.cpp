#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    // properties
    int *arr;
    int top;
    int size;

    // behaviour
    // constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(7);

    st.push(21);
    st.push(11);
    st.push(31);

    st.push(21);
    st.push(11);
    st.push(31);

    st.push(21);
    st.push(11);
    st.push(31);

    cout << "Top " << st.peek() << endl;

    st.pop();
    cout << "Top " << st.peek() << endl;

    st.pop();
    cout << "Top " << st.peek() << endl;

    st.pop();
    cout << "Top " << st.peek() << endl;

    if (st.isEmpty())
    {
        cout << "Stack is empty" << endl;
    }

    else
    {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}