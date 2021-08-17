#include <iostream>
#include <math.h>
using namespace std;
bool CheckChuc5(int n)
{
    n = abs(n);
    n = n / 10;
    if ((n % 10) == 5)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int SumOfChuc5(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (CheckChuc5(a[i]))
        {
            sum += a[i];
        }
    }
    return sum;
}
int main()
{
    int a[] = {154,13,25,51,58};
    cout << SumOfChuc5(a, 5);
}