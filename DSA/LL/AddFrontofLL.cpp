#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
    }
};

void printList(node *n)
{
    int count = 0;
    while (n != NULL)
    {
        cout << n->data << " -> ";
        n = n->next;
        count++;
    }
    cout << "No of element in linkedList is: " << count << endl;
}

// node *push(node *head, int newData)
// {
//     node *newNode = new node(newData);
//     newNode->next = head;
//     head = newNode;
//     return head;
// }

void *push(node **head_reff, int newData)
{
    node *newNode = new node(newData);
    newNode->next = *head_reff;
    *head_reff = newNode;
}

void insertAfter(node *prev_node, int data)
{
    node *newNode = new node(data);
    newNode->next = prev_node->next;
    prev_node->next = newNode;
}

int main()
{
    node *head = nullptr;
    push(&head, 5);
    push(&head, 7);
    push(&head, 3);
    insertAfter(head, 4);

    printList(head);

    return 0;
}
