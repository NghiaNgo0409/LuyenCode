#include <iostream>
#include <math.h>
using namespace std;
int Factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * Factorial(n-1);
}
double SumEx73(int x, int n)
{
    if (n == 0)
    {
        return -1;
    }
    return pow(-1,n+1) * (double(pow(x,2*n))/Factorial(2*n)) + SumEx73(x,n-1);
}
int main()
{
    cout << SumEx73(5,5);
}