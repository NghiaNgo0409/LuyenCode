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
double SumSquareRootFactorial(int n)
{
    if (n==1)
    {
        return sqrt(1);
    }
    return sqrt(Factorial(n)+SumSquareRootFactorial(n-1));
}
int main()
{
    double sum = SumSquareRootFactorial(3);
    cout << sum;
}