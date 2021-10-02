#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* GetNewNode(int x)
{
    Node* temp = new Node();
    temp->data = x;
    return temp;
}
Node* AddHead(Node* head, int x)
{
    Node* temp = GetNewNode(x);
    if(head == NULL)
    {
        head = temp;
        temp->next = temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        head = temp;
    }
}
Node* AddTail(Node* head, int x)
{
    Node* temp = GetNewNode(x);
    if(head == NULL)
    {
        head = temp;
        temp->next = temp;
    }
    else
    {
        head->next = temp;
        temp->next = head;
    }
    return head;
}
Node* DeleteByValue(Node* head, int data)
{
    Node* current = head, * previous;
    if(head == NULL) return head;
    else if (head == head->next)
    {
        if(head->data == data)
        {
            head = NULL;
            delete(current);
        }
    }
    else
    {
        do
        {
            previous = head;
            current = current->next;
            if(current->data == data)
            {
                previous->next = current -> next;
                if(current == head) head = previous;
                delete(current);
                current = previous->next;
            }
        } while (current != head);
        
    }
    return head;
}
int main()
{
    
}