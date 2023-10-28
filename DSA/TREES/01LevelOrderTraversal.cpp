#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

// vector<int> LevelOrderTraversal(Node *root) // output : 3 9 20 15 7
// {
//     vector<int> ans;
//     queue<Node *> q;

//     q.push(root);

//     if (root == NULL)
//     {
//         return ans;
//     }
//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();
//         ans.push_back(temp->data);
//         if (temp->left != NULL)
//         {
//             q.push(temp->left);
//         }
//         if (temp->right != NULL)
//         {
//             q.push(temp->right);
//         }
//     }
//     return ans;
// }

vector<vector<int>> LevelOrderTraversal2(Node *root)
{
    vector<vector<int>> ans;
    queue<Node *> q;

    q.push(root);
    if (root == NULL)
    {
        return ans;
    }

    while (1)
    {
        int size = q.size();

        if (size == 0)
        {
            return ans;
        }

        vector<int> data;
        while (size > 0)
        {
            Node *temp = q.front();
            q.pop();

            data.push_back(temp->data);
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
            size--;
        }
        ans.push_back(data);
    }
    return ans;
}
