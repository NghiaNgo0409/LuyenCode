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
int FindLastPrimeNumber(int a[], int n)
{
    int num = -1;
    for (int i = 0; i < n; i++)
    {
        if (CheckPrimeNumber(a[i]))
        {
            num = a[i];
        }
    }
    return num;
}
int main()
{
    int a[5] = {4,9,7,13,17};
    cout << FindLastPrimeNumber(a, 5);
}