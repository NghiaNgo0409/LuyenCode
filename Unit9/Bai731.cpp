#include <iostream>
#include <math.h>
using namespace std;
int Sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return pow(n, 2) + Sum(n-1);
    }
}
int main()
{
    cout << Sum(5);
}
