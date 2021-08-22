#include <iostream>
using namespace std;
void DeleteNegative(int a[], int& n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            n--;
            for (int j = i; j < n; j++)
            {
                a[j] = a[j+1];
            }
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
    int n = 5;
    int a[5] = {3,-4,5,-6,1};
    Print(a, n);
    DeleteNegative(a, n);
    Print(a, n);
}