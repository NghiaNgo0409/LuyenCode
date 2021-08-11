#include <iostream>
#include <math.h>
using namespace std;
int Factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * Factorial(n - 1);
}
double CalSin(int x, int n)
{
    if (n == 0)
    {
        return x;
    }
    return pow(-1,n) * (pow(x,2*n+1))/double(Factorial(2*n+1)) + CalSin(x,n-1);
}
int main()
{
    cout << CalSin(3,2);
}