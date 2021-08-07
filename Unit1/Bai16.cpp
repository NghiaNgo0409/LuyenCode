#include<iostream>
#include<math.h>
using namespace std;
double SumEx16(int x, int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        double tu = 0;
        double mau = 0;
        for (int j = 1; j <= i; j++)
        {
            tu = pow(x,j);
            mau += j;
        }
        sum += tu/mau;
    }
    return sum;
}
int main()
{
    double sum = SumEx16(2,4);
    cout << sum;
}