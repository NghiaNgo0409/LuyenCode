#include <iostream>
using namespace std;
double SumEx15(int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        double sumM = 0;
        for (int j = 1; j <= i; j++)
        {
            sumM += j;
        }
        sum += 1/sumM;
    }
    return sum;
}
int main()
{
    double sum = SumEx15(5);
    cout << sum;
}