#include <iostream>
using namespace std;
double SumEx7(double n)
{
    if (n == 0)
    {
        return 1/2;
    }
    return (2*n+1)/(2*n+2) + SumEx7(n-1);
}
int main()
{
    double sum = SumEx7(5);
    cout << sum;
    cout << 1/2 + 3/4 + 5/6 + 7/8 + 9/10 + 11/12;
}