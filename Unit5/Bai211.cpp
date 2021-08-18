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
double TBCPrimeNumber(int a[], int n)
{
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (CheckPrime(a[i]))
        {
            sum += a[i];
            count++;
        }
    }
    return (double)sum/count;
}
int main()
{
    int a[] = {1,4,6,11,13};
    cout << TBCPrimeNumber(a, 5);
}