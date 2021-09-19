#include <iostream>
#include <math.h>
using namespace std;
int S(int x, int n)
{
    if(n == 0)
    {
        return x;
    }
    else
    {
        return pow(x, 2*n + 1) + S(x, n-1);
    }
}
int main()
{
    cout << S(5,3);
}