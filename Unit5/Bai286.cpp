#include <iostream>
using namespace std;
void ShiftArray(int a[], int n)
{
    int temp = a[0];
    for(int i = 0; i < n -1; i++)
    {
        a[i] = a[i+1];
    }
    a[n-1] = temp;
}
void ShiftArrayKTimes(int a[], int n, int k)
{
    for (int i = 1; i <=k; i++)
    {
        ShiftArray(a,n);
    }
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
    int a[] = {1,2,3,4,5};
    Print(a, 5);
    ShiftArrayKTimes(a, 5, 3);
    Print(a, 5);
}