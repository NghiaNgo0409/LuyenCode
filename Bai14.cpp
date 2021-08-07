#include <iostream>
#include <math.h>
using namespace std;
int SumOddRoot(int x, int n)
{
    int result = 0;
    for (int i = 0; i <= n; i++)
    {
        result += pow(x, 2*i + 1);
    }
    return result;
}
int main()
{
    int sum = SumOddRoot(10,2);
    cout << sum;
}