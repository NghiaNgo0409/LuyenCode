#include <iostream>
#include <math.h>
using namespace std;
int Factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * Factorial(n-1);
    }
}
float S(int x, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return pow(x, 2*n)/Factorial(2*n) + S(x, n - 1);
    }
}
int main()
{
    cout << S(5,2);
}