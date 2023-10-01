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

int main()
{
    node *head = NULL; // decaring head pointer
    node *temp = head;
    node *n1 = new node(1);
    head = n1; // initialising head to first node

    node *n2 = new node(2);
    n1->next = n2;

    node *n3 = new node(3);
    n2->next = n3;

    node *n4 = new node(4);
    n3->next = n4;

    node *n5 = new node(5);
    n4->next = n5;

    cout << temp->data;
    return 0;
}

