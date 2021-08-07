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
double SumEx19(int x, int n)
{
    double sum = 1;
    for (int i = 0; i <= n; i++)
    {
        double tu = 0;
        double mau = 1;
        for (int j = 0; j <= i; j++)
        {
            tu = pow(x, 2*j + 1);
            mau = Factorial(2*j + 1);
        }
        sum += tu/mau;
    }
    return sum;
}
int main()
{
    double sum = SumEx19(5,3);
    cout << sum;
}