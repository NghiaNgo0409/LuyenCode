#include <iostream>
#include <math.h>
using namespace std;
bool CheckSquare(int n)
{
    int x = sqrt(n);
    if (x * x == n)
    {
        return true;
    }
    return false;
}
void DeleteSquare(int a[] , int& n)
{
    for (int i = 0; i < n; i++)
    {
        if (CheckSquare(a[i]))
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
    int a[] = {1,2,3,4,5};
    int n = 5;
    Print(a, n);
    DeleteSquare(a, n);
    Print(a,n);
}