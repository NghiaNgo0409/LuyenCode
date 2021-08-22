#include <iostream>
#include <math.h>
using namespace std;
bool CheckPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
void DeletePrime(int a[], int& n)
{
    for (int i = 0; i < n; i++)
    {
        if (CheckPrime(a[i]))
        {
            n--;
            for (int j = i; j < n;j++)
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
    int a[5] = {1,2,3,4,5};
    int n = 5;
    Print(a, n);
    DeletePrime(a, n);
    Print(a, n);
}