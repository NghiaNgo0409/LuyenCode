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
void ArrangePrimeIncreasing(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (CheckPrime(a[i]) && CheckPrime(a[i]))
            {
                if (a[i] > a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }
}
void PrintArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[] = {4,3,6,2,9,11,5};
    PrintArray(a, 7);
    ArrangePrimeIncreasing(a, 7);
    PrintArray(a, 7);
}