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
double SumEx74(int x, int n)
{
    if (n == 0)
    {
        return 1 - x;
    }
    return pow(-1,n+1) * (double(pow(x,(2*n)+1))/Factorial((2*n) + 1)) + SumEx74(x,n-1);
}
int main()
{
    cout << SumEx74(5,5);
}