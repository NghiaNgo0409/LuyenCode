#include <iostream>
#include <math.h>
using namespace std;
float sqrt3(float x)
{
    if (x == 0)
    {
        return 0;
    }
    if (x < 0)
    {
        return -sqrt3(-x);
    }
    return exp(log(x)/3);
}
int main()
{
    cout << sqrt3(27);
}
