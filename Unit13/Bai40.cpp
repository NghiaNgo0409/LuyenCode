#include <iostream>
using namespace std;
bool isFullOdd(int n)
{
    while(n != 0)
    {
        int temp = n % 10;
        if(temp % 2 == 0)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
int FindFirstFullOdd(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(isFullOdd(a[i]))
        {
            return a[i];
        }
    }
}
int FindMaxFullOdd(int a[], int n)
{
    int max = FindFirstFullOdd(a, n);
    for(int i = 0; i < n; i++)
    {
        if(isFullOdd(a[i]) && a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{
    int a[4] = {12, 13, 53, 153};
    cout << FindMaxFullOdd(a, 4);
}