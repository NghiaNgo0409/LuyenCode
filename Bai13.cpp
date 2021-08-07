#include <iostream>
#include <math.h>
using namespace std;
int SumDoubleRoot(int x, int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result += pow(x,2*i);
    }
    return result;
}
int main()
{
    int sum = SumDoubleRoot(5,3);
    cout << sum;
}