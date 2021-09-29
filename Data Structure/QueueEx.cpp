#include <iostream>
using namespace std;
#define MAX_SIZE 10000
class Queue
{
    private:
    int a[MAX_SIZE];
    long front, rear;
    public:
    Queue()
    {
        front = rear = -1;
    }
    bool isEmpty()
    {
        return (front == -1 && rear == -1);
    }
    bool isFull()
    {
        return (rear + 1) % MAX_SIZE == front ? true : false;
    }
    void Enqueue(int x)
    {
        if(isFull())
        {
            cout << "Overflow" << endl;
        }
        else if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % MAX_SIZE;
        }
        a[rear] = x;
    }
    void Dequeue()
    {
        if(isEmpty())
        {
            cout << "Overflow" << endl;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % MAX_SIZE;
        }
    }
    int Front()
    {
        if(front == -1)
        {
            cout << "Error" << endl;
            return -1;
        }
        return a[front];
    }
    void Print()
    {
        int size = rear - front + 1;
        for(int i = 0; i < size; i++)
        {
            int index = (front + i) % MAX_SIZE;
            cout << a[index] << " ";
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
    q.Enqueue(4);
    q.Enqueue(5);
    long n; cin >> n;
    for(int i = 0; i < n - 1; i++)
    {
        int ch = q.Front();
        q.Enqueue(ch);
        q.Enqueue(ch);
        q.Dequeue();
    }
    cout << q.Front();
}