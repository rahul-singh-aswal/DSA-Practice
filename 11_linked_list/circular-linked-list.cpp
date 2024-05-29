#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }

        cout << "Memory is free for node with data " << value << endl;
    }
};

void print(Node *&tail)
{
    Node *temp = tail;
    // empty list
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    }

    while (tail != temp);
    cout << endl;
}

void insertNode(Node *&tail, int element, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        temp->next = temp;
    }

    // non-empty list
    // assuming that the element is present in the list
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found -> curr is representing element
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node *&tail, int value)
{
    // empty list
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    // non-empty list
    else
    {
        // assuming that the value is present in the list
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // value is found at curr
        // 1 node linked list
        if (curr == prev)
        {
            tail = NULL;
        }

        // >=2 nodes linked list
        else if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

bool isCircular(Node *head)
{
    // empty list
    if (head == NULL)
    {
        return true;
    }

    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == head)
    {
        return true;
    }

    return false;
}

int main()
{
    Node *tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);
    /*
        insertNode(tail, 5, 7);
        print(tail);

        insertNode(tail, 7, 9);
        print(tail);

        insertNode(tail, 5, 6);
        print(tail);

        insertNode(tail, 9, 10);
        print(tail);

        insertNode(tail, 3, 4);
        print(tail);


        */

    // deleteNode(tail, 6);
    // print(tail);

    // deleteNode(tail, 3);
    // print(tail);
    // deleteNode(tail, 9);
    // print(tail);

    if (isCircular(tail))
    {
        cout << "Linked List is Circular" << endl;
    }
    else
    {
        cout << "Linked List is not Circular" << endl;
    }
    return 0;
}