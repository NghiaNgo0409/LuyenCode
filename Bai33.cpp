#include <iostream>
#include <math.h>
using namespace std;
double SumSquareRoot(int n)
{
    if (n==1)
    {
        return sqrt(2);
    }
    return sqrt(2+SumSquareRoot(n-1));
}
int main()
{
    double sum = SumSquareRoot(3);
    cout << sum;
}