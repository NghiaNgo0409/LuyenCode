#include <iostream>
using namespace std;
void MoveHead(int a[], int index)
{
    int num = a[index];
    for (int i = index; i > 0; i--)
    {
        a[i] = a[i-1];
    }
    a[0] = num;
}
void Ex282(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0)
        {
            MoveHead(a, i);
        }
    }
}
void Print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[]= {2,4,1,7,9,15,12};
    Print(a,7);
    Ex282(a, 7);
    Print(a, 7);
}