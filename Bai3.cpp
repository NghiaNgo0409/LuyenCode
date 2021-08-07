#include <iostream>
using namespace std;
double SumFractionNNumbers(double n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1/n + SumFractionNNumbers(n-1);
}
int main()
{
    double sum = SumFractionNNumbers(5);
    cout << sum;
}