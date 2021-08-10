#include <iostream>
#include <math.h>
using namespace std;
int CalFunc(int x)
{
    if (x >= 5)
    {
        return 2*pow(x,2) + 5*x + 9;
    }
    else
    {
        return -2*pow(x,2) + 4*x - 9;
    }
}
int main()
{
    cout << CalFunc(3);
}