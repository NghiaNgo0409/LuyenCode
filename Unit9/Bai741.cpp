#include <iostream>
#include <math.h>
using namespace std;
int S(int x, int n)
{
    if(n == 1)
    {
        return x;
    }
    else
    {
        return pow(x,n) + S(x, n - 1);
    }
}
int main()
{
    cout << S(5,3);
}