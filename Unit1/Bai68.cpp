#include <iostream>
#include <math.h>
using namespace std;
int SumEx68(int x, int n)
{
    if (n == 1)
    {
        return -pow(x,2);
    }
    return pow(-1,n)*pow(x,2*n) + SumEx68(x,n-1);
} 
int main()
{
    cout << SumEx68(3,6);
}