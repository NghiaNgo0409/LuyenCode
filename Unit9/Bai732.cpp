#include <iostream>
#include <math.h>
using namespace std;
float Sum(float n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return 1/n + Sum(n - 1);
    }
}
int main()
{
    cout << Sum(5);
}