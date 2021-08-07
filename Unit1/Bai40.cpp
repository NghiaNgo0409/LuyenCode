#include <iostream>
#include <math.h>
using namespace std;
double SumEx40(int x, int n)
{
    if (n==1)
    {
        return sqrt(x);
    }
    return sqrt(pow(x,n) + SumEx40(x,n-1));
}
int main()
{
    double sum = SumEx40(5,3);
    cout << sum;
}