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

void insertAtHead(Node *&head, int d)
{
    // create new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    // create new node
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;

    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Delete from position
void deleteAtPosition(Node *&head, Node *&tail, int position)
{
    // deleting first or starting node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        // deleting middle or last node
        Node *curr = head;
        Node *prev = head;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        if (prev->next == NULL)
        {
            tail = prev;
        }
    }
}

int main()
{
    // created a new node
    Node *node1 = new Node(7);
    cout << node1->data << endl;
    cout << node1->next << endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtTail(tail, 100);
    print(head);

    insertAtTail(tail, 700);
    print(head);

    insertAtPosition(head, tail, 3, 90);
    print(head);

    insertAtPosition(head, tail, 1, 70);
    print(head);

    insertAtPosition(head, tail, 7, 200);
    print(head);

    cout << "Tail : " << tail->data << endl;

    deleteAtPosition(head, tail, 3);
    print(head);

    deleteAtPosition(head, tail, 1);
    print(head);

    deleteAtPosition(head, tail, 6);
    print(head);

    cout << "Tail : " << tail->data << endl;

    deleteAtPosition(head, tail, 5);
    print(head);

    cout << "Tail : " << tail->data << endl;

    return 0;
}