#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
int LeftOf(const int value, const Node* root)
{
    return value < root->data;
}
int RightOf(const int value, const Node* root)
{
    return value > root->data;
}
Node* Insert(Node* root, const int value)
{
    if (root == NULL)
    {
        Node* node = new Node();
        node->data = value;
        node->left = NULL;
        node->right = NULL;
        return node;
    }
    if (LeftOf(value, root))
    {
        Insert(root->left, value);
    }
    else if (RightOf(value, root))
    {
        Insert(root->right, value);
    }
    return root;
}
bool Search(const Node* root, int value)
{
    if(root == NULL)
    {
        return false;
    }
    if(root->data == value)
    {
        return true;
    }
    else if (LeftOf(value, root))
    {
        return Search(root->left, value);
    }
    else if (RightOf(value, root))
    {
        return Search(root->right, value);
    }
}
int main()
{
    
}
