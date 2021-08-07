#include <iostream>
using namespace std;
double SumFraction2NNumbers(double n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1/(2*n) + SumFraction2NNumbers(n-1);
}
int main()
{
    double sum = SumFraction2NNumbers(5);
    cout << sum;
}