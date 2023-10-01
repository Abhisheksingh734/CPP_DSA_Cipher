#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *next;
    node *prev;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

node *insert(node *head, int data, int pos)
{

    node *newNode = new node(data);

    if (head == NULL)
    {
        head = newNode;
        return head;
    }

    if (pos == 0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;

        return head;
    }

    node *temp = head;

    int count = 0;
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }

    newNode->next = temp->next;

    if (temp->next != NULL)
    {
        temp->next->prev = newNode;
    }

    temp->next = newNode;
    newNode->prev = temp;

    return head;
};

int main()
{
    node *head = NULL;

    head = insert(head, 1, 0);
    head = insert(head, 2, 1);
    head = insert(head, 3, 2);
    head = insert(head, 4, 3);
    head = insert(head, 5, 4);

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    return 0;
}