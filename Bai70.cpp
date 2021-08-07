#include <iostream>
#include <math.h>
using namespace std;
double SumEx70(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return pow(-1,n+1) * (1.0/sum) + SumEx70(n-1);
}
int main()
{
    cout << SumEx70(5);
}