#include <iostream>
#include <math.h>
using namespace std;
int SumEx67(int x, int n)
{
    if (n == 1)
    {
        return x;
    }
    return pow(-1,n+1)*pow(x,n) + SumEx67(x,n-1);
} 
int main()
{
    cout << SumEx67(3,6);
}