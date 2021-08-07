#include <iostream>
#include <math.h>
using namespace std;
double SumEx38(int n)
{
    if (n==0)
    {
        return 0;
    }
    return pow(n + SumEx38(n-1),1.0/(n+1));
}
int main()
{
    double sum = SumEx38(3);
    cout << sum;
}