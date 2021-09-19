#include <iostream>
#include <math.h>
using namespace std;
float S(int n)
{
    if(n == 1)
    {
        return sqrt(2);
    }
    return sqrt(2+S(n-1));
}
int main()
{
    cout << S(5);
}