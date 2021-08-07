#include <iostream>
using namespace std;
double SumEx41(int n)
{
    if (n==0 || n == 1)
    {
        return 1;
    }
    return 1.0/(1.0+SumEx41(n-1));
}
int main()
{
    double sum = SumEx41(3);
    cout << sum;
}