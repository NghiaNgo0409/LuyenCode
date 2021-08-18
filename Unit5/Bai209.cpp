#include <iostream>
using namespace std;
bool CheckPalindromeNumber(int n)
{
    int x = n, a = 0;
    while(x != 0)
    {
        a = a * 10 + x % 10;
        x /= 10;
    }
    if (a == n)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int SumPalindromeNumber(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (CheckPalindromeNumber(a[i]))
        {
            sum += a[i];
        }
    }
    return sum;
}
int main()
{
    int a[]= {13,22,-32,121,44};
    cout << SumPalindromeNumber(a, 5);
}