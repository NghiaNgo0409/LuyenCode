#include <iostream>
#include <math.h>
using namespace std;
bool IsSquareNumber(int n)
{
    int x = sqrt(n);
    if (x*x == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    cout << IsSquareNumber(10);
}