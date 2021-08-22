#include <iostream>
using namespace std;
void AddXInK(int a[], int n, int x, int k)
{
    if (k == n)
    {
        n++;
        a[n-1] = x;
    }
    else 
    {
        n++;
        for (int i = n - 1; i > k; i--)
        {
            a[i] = a[i-1];
        }
        a[k] = x;
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
    int a[] = {1,2,3};
    AddXInK(a, 3, 4, 0); 
    Print(a, 4);
}