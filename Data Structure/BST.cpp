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
int LeftMostChild(const Node* root)
{
    while(root->left != NULL)
    {
        root = root->left;
    }
    return root->data;
}
Node* Delete(Node* root, int value)
{
    if(root == NULL)
    {
        return root;
    }
    if(LeftOf(value, root))
    {
        root->left = Delete(root->left, value);
    }
    else if(RightOf(value, root))
    {
        root->right = Delete(root->right, value);
    }
    else
    {
        if(root->left == NULL)
        {
            Node* newNode = root->right;
            delete(root);
            return newNode;
        }
        if(root->right == NULL)
        {
            Node* newNode = root->left;
            delete(root);
            return newNode;
        }
        root->data = LeftMostChild(root->right);
        root->right = Delete(root->right, root->data);
    }
    return root;
}
void PreOrder(Node* root)
{
    if(root != NULL)
    {
        cout << root->data << " ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
    cout << endl;
}
void InOrder(Node* root)
{
    if(root != NULL)
    {
        InOrder(root->left);
        cout << root->data << " ";
        InOrder(root->right);
    }
    cout << endl;
}
void PostOrder(Node* root)
{
    if(root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        cout << root->data << " ";
    }
    cout << endl;
}
int main()
{
    
}
