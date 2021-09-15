#include <iostream>
#include <math.h>
using namespace std;
int Factorial(int n)
{
    if(n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * Factorial(n-1);
    }
}
float Sum(int x, int n)
{
    if(n == 1)
    {
        return x;
    }
    else
    {
        return (pow(x,n)/Factorial(n)) + Sum(x, n -1);
    }
}
int main()
{
    cout << Sum(3, 5);
}