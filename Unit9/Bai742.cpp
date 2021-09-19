#include <math.h>
#include <iostream>
using namespace std;
int S(int x, int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return pow(x, 2*n) + S(x, n - 1);
    }
}
int main()
{
    cout << S(5,3);
}