#include <iostream>
using namespace std;
double SumEx6(double n)
{
    if (n == 0)
    {
        return 0;
    }
    return n/(n+1) + SumEx6(n-1);
}
int main()
{
    double sum = SumEx6(5);
    cout << sum;
}