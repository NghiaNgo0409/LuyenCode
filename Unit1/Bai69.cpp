#include <iostream>
#include <math.h>
using namespace std;
int SumEx69(int x, int n)
{
    if (n == 0)
    {
        return x;
    }
    return pow(-1,n)*pow(x,(2*n)+1) + SumEx69(x,n-1);
} 
int main()
{
    cout << SumEx69(3,6);
}