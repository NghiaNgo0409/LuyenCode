#include <iostream>
using namespace std;
bool CheckPrimeNumber(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int FindFirstPrimeNumber(int a[] , int n)
{
    for(int i = 0; i < n; i++)
    {
        if (CheckPrimeNumber(a[i]))
        {
            return a[i];
        }
    }
    return -1;
}
int main()
{
    int a[5] = {4,6,9,14,21};
    cout << FindFirstPrimeNumber(a, 5);
}