#include <iostream>
using namespace std;
struct SOPHUC
{
    int ao;
    int thuc;
};
struct Node
{
    SOPHUC data;
    Node* next;
};
Node* GetNode(SOPHUC sp)
{
    Node* temp = new Node();
    temp->data = sp;
    temp->next = NULL;
    return temp;
}
int main()
{
    
}
