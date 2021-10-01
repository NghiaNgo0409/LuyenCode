#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* prev;
    Node* next;
};
Node* CreateLinkList(int n)
{
    Node* head = NULL;
    for(int i = 0; i < n; i++)
    {
        Node* temp = new Node();
        temp->prev = NULL;
        temp->next = NULL;
        cin >> temp->data;
        if(head == NULL)
        {
            head = temp;
        }
        else
        {
            head->prev = temp;
            temp->next = head;
            head = temp;
        }
    }
    return head;
}
Node* DeleteNode(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }
    else
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return head;
}
void Print(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node* head = CreateLinkList(4);
    Print(head);
    head = DeleteNode(head);
    Print(head);
}
