#include <iostream>
#include <math.h>
using namespace std;
int SumPowN(int x, int n)
{
    if (n == 1)
    {
        return x;
    }
    return pow(x,n) + SumPowN(x,n-1);
}
int main()
{
    cout << SumPowN(3,5);
}