#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

void printInOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    printInOrder(root->left);

    cout << root->data << " ";

    printInOrder(root->right);
}

void printPreOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    printPreOrder(root->left);

    printPreOrder(root->right);
}

node *newNode(int data)
{
    node *element = new node();

    element->data = data;
    element->left = NULL;
    element->right = NULL;

    return element;
}

int main()
{

    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    // printInOrder(root);
    printPreOrder(root);
    return 0;
}