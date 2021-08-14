#include <iostream>
#include <math.h>
using namespace std;
int FindSquareNum(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = sqrt(a[i]);
        if (x*x == a[i])
        {
            return a[i];
        }
    }
    return -1;
}
int main()
{
    int a[5] = {3,8,9,10,4};
    cout << FindSquareNum(a, 5);
}