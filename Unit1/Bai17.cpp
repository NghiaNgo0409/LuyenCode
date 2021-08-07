#include <iostream>
#include <math.h>
using namespace std;
double SumEx17(int x, int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        double tu = 0;
        double mau = 1;
        for (int j = 1; j <= i; j++)
        {
            tu = pow(x, j);
            mau *= j;
        }
        sum += tu/mau;
    }
    return sum;
}
int main()
{
    double sum = SumEx17(5,3);
    cout << sum;
}