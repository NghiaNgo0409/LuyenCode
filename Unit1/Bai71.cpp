#include <iostream>
#include <math.h>
using namespace std;
double SumEx71(int x, int n)
{
    if (n == 1)
    {
        return -x;
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return pow(-1,n) * (double(pow(x,n))/sum) + SumEx71(x,n-1);
}
int main()
{
    cout << SumEx71(5,5);
}