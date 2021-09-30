#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
class Queue
{
    private:
    Node* rear;
    Node* front;
    public:
    Queue()
    {
        rear = NULL;
        front = NULL;
    }
    void Enqueue(int x)
    {
        Node* temp = new Node();
        temp->data = x;
        temp->next = NULL;
        if(rear == NULL && front == NULL)
        {
            rear = temp;
            front = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
    }
    void Dequeue()
    {
        if(front == NULL && rear == NULL)
        {
            cout << "Overflow" << endl;
        }
        else
        {
            Node* tmp = front;
            front = front->next;
            delete tmp;
        }
    }
    int Front()
    {
        return front->data;
    }
    bool isEmpty()
    {
        return (front == NULL && rear == NULL);
    }
    void Print()
    {
        Node* tmp = front;
        while(tmp != NULL)
        {
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }
};
int main()
{
    Queue q;
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Print();
    q.Dequeue();
    q.Print();
}
