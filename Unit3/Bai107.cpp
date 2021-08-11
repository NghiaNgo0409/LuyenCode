#include <iostream>
#include <math.h>
using namespace std;
double SqrtNofX(int x, int n)
{
    return pow(x,1.0/n);
}
int main()
{
    cout << SqrtNofX(125,3);
}