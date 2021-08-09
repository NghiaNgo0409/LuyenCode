#include <iostream>
#include <math.h>
using namespace std;
int SumEx86(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return pow(n,3) + SumEx86(n-1);
}
int main()
{
    cout << SumEx86(5);
}