#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* CreateLinkedList(int n)
{
    Node* head = NULL;
    for(int i = 0; i < n; i++)
    {
        Node* temp = new Node();
        cin >> temp->data;
        temp->next = NULL;
        if(head == NULL)
        {
            head = temp;
        }   
        else
        {
            Node* tmp = head;
            while(tmp->next != NULL)
            {
                tmp = tmp->next;
            }
            tmp->next = temp;
        }
    }
    return head;
}
bool isEmpty(Node* head)
{
    if(head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
Node* AddTail(Node* head, int x)
{
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        Node* tmp = head;
        while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = temp;
    }
    return head;
}
Node* AddAfterQ(Node* head, int x, Node* q)
{
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    Node* tmp = head;
    while(tmp != q)
    {
        tmp = tmp->next;
    }
    temp->next = q->next;
    q->next = temp;
    return head;
}
Node* AddBeforeQ(Node* head, int x, Node* q)
{
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    Node* tmp = head;
    while(tmp->next != q)
    {
        tmp = tmp->next;
    }
    temp->next = q;
    tmp->next = temp;
    return head;
}
Node* DeleteHead(Node* head)
{
    Node* temp = head;
    head = head->next;
    delete temp;
}
int main()
{
    
}
