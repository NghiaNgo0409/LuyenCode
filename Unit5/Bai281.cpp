#include <iostream>
using namespace std;
void EvenToHead(int a[], int index)
{
    int tam = a[index];
    for (int i = index; i > 0; i--)
    {
        a[i] = a[i-1];
    }
    a[0] = tam;
}
void ZeroToMiddle(int a[], int index, int lastIndex)
{
    for(int i = index; i > lastIndex; i--)
    {
        a[i] = a[i-1];
    }
    a[lastIndex] = 0;
}
void Ex281(int a[], int n)
{
    int i;
    int lastIndex = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] != 0)
        {
            EvenToHead(a, i);
        }
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            lastIndex = i;
            break;
        }
    }
    for (i; i < n; i++)
    {
        if (a[i] == 0)
        {
            ZeroToMiddle(a, i, lastIndex);
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
    int a[] = {1,3,2,4,5,0};
    Print(a, 6);
    Ex281(a, 6);
    Print(a, 6);
}
