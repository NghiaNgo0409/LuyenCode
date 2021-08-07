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
double SumEx72(int x, int n)
{
    if (n == 1)
    {
        return -x;
    }
    return pow(-1,n) * (double(pow(x,n))/Factorial(n)) + SumEx72(x,n-1);
}
int main()
{
    cout << SumEx72(5,5);
}