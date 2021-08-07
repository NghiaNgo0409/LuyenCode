#include <iostream>
#include <math.h>
using namespace std;
double SumSquareRootN(int n)
{
    if (n==1)
    {
        return sqrt(1);
    }
    return sqrt(n+SumSquareRootN(n-1));
}
int main()
{
    double sum = SumSquareRootN(3);
    cout << sum;
}