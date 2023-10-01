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
node *insert(node *head, int data, int k)
{

    node *n = new node(data);

    if (head == NULL)
    {
        head = n;
        return head;
    }

    if (k == 0)
    {
        n->next = head;
        head->prev = n;
        head = n;

        return head;
    }

    node *temp = head;
    int pos = 0;

    while (pos != k - 1)
    {

        temp = temp->next;
        pos++;
    }

    n->next = temp->next;

    if (temp->next != NULL) // inserting at end;
        temp->next->prev = n;

    temp->next = n;
    n->prev = temp;

    return head;
}

node *deletion(node *head, int pos)
{
    node *temp = head;

    if (pos == 0)
    {
        node *ptr = head;
        head = head->next;

        if (head != NULL)
            head->prev = NULL;

        delete ptr;
        return head;
    }

    int count = 0;
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }

    node *ptr = temp->next;
    temp->next = temp->next->next;

    if (temp->next != NULL) // if we deleting end of LL
        temp->next->prev = temp;

    delete ptr;

    return head;
}

node *reverse(node *head)
{
    node *curr = head;
    node *prev = NULL;
    node *n = NULL;

    while (curr != NULL)
    {
        n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }

    head = prev;

    return head;
}

// class DoublyLinkedList{
//     public:
//     node* head;

//     DoublyLinkedList(){
//         head = NULL;
//     }

//     void insert(int pos, int data){
//         node * newNode = new node(data);

//         if(head == NULL){
//             head = newNode;
//             return ;
//         }

//         if(pos == 0){
//             newNode->next = head;
//             head->prev = newNode;
//             head = newNode;

//         }

//         node* temp =head;
//         int count = 0;

//         while(temp->next != NULL && count < pos-1){
//             temp = temp->next;
//             count++;
//         }

//         if(count == pos-1){
//             newNode ->prev = temp;
//             newNode->next = temp->next;
//             if(temp->next != NULL){
//                 temp->next->prev = newNode;
//             }
//             temp->next = newNode;

//         }

//         void display() {
//             node *temp = head;
//             while(temp != NULL){
//                 cout<<temp->data<<" ";
//                 temp =temp->next;
//             }
//         }
//     }
// };

int main()
{

    // node *head = new node(1);

    // node *n2 = new node(2);

    // node *n3 = new node(3);

    // head->next = n2;
    // n2->prev = head;

    // n2->next = n3;
    // n3->prev = n2;

    node *head = NULL;

    head = insert(head, 1, 0);
    head = insert(head, 2, 1);
    head = insert(head, 3, 2);
    head = insert(head, 4, 3);
    // head = deletion(head, 3); // deletion at end
    head = reverse(head); // reverse the linked list

    node *temp = head;
    while (temp != NULL)
    {

        cout << temp->data << "\n";
        temp = temp->next;
    }
    // cout << "\n";
    // temp = head;

    // while (temp->next != NULL)
    // {
    //     temp = temp->next;
    // }

    // while (temp != NULL)
    // {
    //     cout << temp->data << "\n";
    //     temp = temp->prev;
    // }

    return 0;
}