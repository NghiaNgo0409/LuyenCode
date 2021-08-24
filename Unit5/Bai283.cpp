#include <iostream>
using namespace std;
void Reverse(int a[], int n)
{
    for (int i = 0, j = n-1; i < j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
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
    int a[] = {1,2,3,4,5};
    Print(a, 5);
    Reverse(a, 5);
    Print(a, 5);
}