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
int FindMaxValue(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{
    int a[] = {2,4,6,8,10};
    int n = FindMaxValue(a,5) + 1;
    while(true)
    {
        if (CheckPrimeNumber(n))
        {
            cout << "So nguyen to nho nhat ma lon hon moi gia tri trong mang a la : " << n;
            break;
        }
        n++;
    }
}