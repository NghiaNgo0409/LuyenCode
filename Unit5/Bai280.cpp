#include <iostream>
using namespace std;
void MoveToHead(int a[], int n)
{
    int temp = a[n-1];
    for(int i = n -1; i > 0; i--)
    {
        a[i] = a[i-1];
    }
    a[0] = temp;
}
void Print(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[3] = {1, 2, 3};
    Print(a, 3);
    MoveToHead(a, 3);
    Print(a, 3); 
}