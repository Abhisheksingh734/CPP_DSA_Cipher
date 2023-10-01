#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

node *insertEnd(node *head, int value)
{
    node *newNode = new node(value);
    node *temp = head;

    // if linkedList is empty
    if (head == NULL)
    {
        head = newNode;
        return head;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}

int main()
{
    // node *head = NULL; // decaring head pointer
    // node *n1 = new node(1);
    // head = n1; // initialising head to first node
    // node *temp = head;

    // node *n2 = new node(2);
    // n1->next = n2;

    // node *n3 = new node(3);
    // n2->next = n3;

    // node *n4 = new node(4);
    // n3->next = n4;

    // node *n5 = new node(5);
    // n4->next = n5;

    // n5->next = NULL;

    //     while (temp != NULL)
    // {
    //     cout << temp->data << "->";
    //     temp = temp->next;
    // }

    node *n1 = new node(1);

    node *head = NULL;

    head = insertEnd(head, 1);
    head = insertEnd(head, 2);
    head = insertEnd(head, 3);
    head = insertEnd(head, 4);
    head = insertEnd(head, 5);

    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    return 0;
}
