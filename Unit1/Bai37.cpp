#include <iostream>
#include <math.h>
using namespace std;
double SumSquareRootN1(int n)
{
    if (n==1 || n==0)
    {
        return 0;
    }
    return pow(n + SumSquareRootN1(n-1),1.0/n);
}
int main()
{
    double sum = SumSquareRootN1(3);
    cout << sum;
}