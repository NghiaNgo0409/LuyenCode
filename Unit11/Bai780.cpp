#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* createLinkedList(int n)
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
            while(tmp->next)
            {
                tmp = tmp->next;
            }
            tmp->next = temp;
        }
    }
    return head;
}
Node* createNode(int n)
{
    Node* temp = new Node();
    temp->data = n;
    temp->next = NULL;
}
Node* AddHead(Node* head, int x)
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
        temp->next = head;
        head = temp;
    }
}
void Print(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->data;
        tmp = tmp->next;
    }
}
int SumAllNode(Node* head)
{
    Node* tmp = head;
    int sum = 0;
    while(tmp != NULL)
    {
        sum += tmp->data;
        tmp = tmp->next;
    }
    return sum;
}
int main()
{
    
}
