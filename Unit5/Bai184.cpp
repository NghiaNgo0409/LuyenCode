#include <iostream>
#include <math.h>
using namespace std;
bool CheckPrimeNumber(int n)
{
    if (abs(n) == 0 || abs(n) == 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i < abs(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
void ListPrimeNumber(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (CheckPrimeNumber(a[i]))
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int a[] = {-1,3,5,7,-9,11,2,4};
    ListPrimeNumber(a, 8);
}