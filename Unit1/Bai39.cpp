#include <iostream>
#include <math.h>
using namespace std;
int Factorial(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    return n * Factorial(n-1);
}
double SumEx39(int n)
{
    if (n==0)
    {
        return 0;
    }
    return pow(Factorial(n) + SumEx39(n-1),1.0/(n+1));
}
int main()
{
    double sum = SumEx39(3);
    cout << sum;
}