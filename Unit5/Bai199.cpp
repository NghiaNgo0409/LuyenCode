#include <iostream>
#include <math.h>
using namespace std;
bool CheckPrimeNumber(int n)
{
    if (abs(n) == 0 || abs(n) == 1)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (abs(n) % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}
void ListPrimeNumber(int a[], int n)
{
    for (int i = 0; i < n;i++)
    {
        if (CheckPrimeNumber(a[i]))
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int a[] = {1,4,2,6,11,13};
    ListPrimeNumber(a, 6);
}