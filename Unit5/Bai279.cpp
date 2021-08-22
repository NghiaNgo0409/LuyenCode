#include <iostream>
using namespace std;
void DeleteX(int a[], int& n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            n--;
            for (int j = i; j < n; j++)
            {
                a[j] = a[j+1];
            }
        }
    }
}
void DeleteAllDuplicate(int a[], int& n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                flag = 1;
                DeleteX(a, n, a[i]);
            }
        }
        if (flag == 1)
        {
            DeleteX(a, n, a[i]);
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
    int a[7] = {1,2,3,4,4,5,6};
    int n = 7;
    Print(a, n);
    DeleteAllDuplicate(a, n);
    Print(a, n);
}