#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the root node data" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
        return NULL;

    cout << "Enter the left tree" << endl;
    root->left = buildTree(root->left);
    cout << "Enter the right tree" << endl;
    root->right = buildTree(root->right);

    return root;
}

int main()
{
    node *root = NULL;
    root = buildTree(root);
    return 0;
}