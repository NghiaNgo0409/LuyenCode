#include <iostream>
#include <math.h>
using namespace std;
void PrintSquareNumberSmallerThanN(int n)
{
    for (int i = 1; i < n; i++)
    {
        int x = sqrt(i);
        if (x * x == i)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    PrintSquareNumberSmallerThanN(20);
}