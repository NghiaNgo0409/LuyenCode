#include <iostream>
using namespace std;
#define MAX 101
void InputArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}
void OutputArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void Add(int a[], int& n, int val, int pos)
{
    if (n >= MAX)
    {
        return;
    }
    if(pos < 0)
    {
        pos = 0;
    }
    else if (pos > n)
    {
        pos = n;
    }
    for(int i = n; i > pos; i--)
    {
        a[i] = a[i-1];
    }
    a[pos] = val;
    ++n;
}
void Delete(int a[], int& n, int pos)
{
    if(n <= 0)
    {
        return;
    }
    if(pos < 0)
    {
        pos = 0;
    }
    else if(pos > n)
    {
        pos = n - 1;
    }
    for(int i = pos; i < n - 1; i++)
    {
        a[i] = a[i+1];
    }
    --n;
}
int main()
{
    int a[MAX] = {1,2,3,4,5,6};
    int n = 6;
    OutputArray(a, n);
    Add(a, n, 7,9);
    OutputArray(a, n);
    Delete(a, n, 3);
    OutputArray(a, n);
}