#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};

node *newNode(int data)
{

    node *element = new node();
    element->data = data;
    element->left = NULL;
    element->right = NULL;

    return element;
}

void printTree(node *root)
{
    while (root != NULL)
    {
        cout << root->data << " ";
        root = root->left;
    }
}

int main()
{
    node *root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);

    root->left->left = newNode(4);

    printTree(root);
    return 0;
}
