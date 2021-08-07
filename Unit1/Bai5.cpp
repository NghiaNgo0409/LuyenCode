#include <iostream>
using namespace std;
double SumFractionOddNumbers(double n)
{
    if (n == 0)
    {
        return 1;
    }
    return 1/(2*n+1) + SumFractionOddNumbers(n-1);
}
int main()
{
    double sum = SumFractionOddNumbers(5);
    cout << sum;
}