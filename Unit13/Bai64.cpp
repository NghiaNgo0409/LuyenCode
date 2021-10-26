#include <iostream>
using namespace std;
void AddArray(int a[], int& n, int pos, int x)
{
    for(int i = n; i > pos; i--)
    {
        a[i] = a[i-1];
    }
    a[pos] = x;
    n++;
}
void DeleteArray(int a[], int& n, int pos)
{
    for(int i = pos; i < n - 1; i++)
    {
        a[i] = a[i+1];
    }
    n--;
}
int main()
{
    int n = 5;
    int a[1000] = {1, 2, 3, 4, 5};
    AddArray(a, n, 3, 8);
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    DeleteArray(a, n, 1);
    for(int j = 0; j < n; j++)
    {
        cout << a[j] << " ";
    }
}