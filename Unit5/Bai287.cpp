#include <iostream>
using namespace std;
void ShiftRightArray(int a[], int n)
{
    int temp = a[n-1];
    for (int i = n-1; i > 0; i--)
    {
        a[i] = a[i-1];
    }
    a[0] = temp;
}
void ShiftRightArrayKTimes(int a[], int n, int k)
{
    for(int i = 1; i <= k; i++)
    {
        ShiftRightArray(a, n);
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
    ShiftRightArrayKTimes(a, 5, 3);
    Print(a, 5);
}