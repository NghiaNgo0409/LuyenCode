#include <iostream>
#include <math.h>
using namespace std;
double SumEx80(int x, int n)
{
    if (n == 1)
    {
        return x;
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return (double)pow(x,n)/sum + SumEx80(x, n-1);
}
int main()
{
    cout << SumEx80(5,3);
}