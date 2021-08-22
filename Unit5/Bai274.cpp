#include <iostream>
using namespace std;
void DeleteEven(int a[], int& n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            n--;
            for (int j = i; j < n; j++)
            {
                a[j] = a[j + 1];
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
    int a[5] = {1,2,3,4,5};
    int n = 5;
    Print(a, n);
    DeleteEven(a, n);
    Print(a, n);
}