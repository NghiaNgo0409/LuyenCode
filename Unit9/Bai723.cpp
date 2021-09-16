#include <iostream>
using namespace std;
int SumPositive(int a[], int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        if(a[n-1] >= 0)
        {
            return a[n-1] + SumPositive(a, n - 1);
        }
        return SumPositive(a, n - 1);
    }
}
int main()
{
    int a[5] = {1,2,3,4,-5};
    cout << SumPositive(a, 5);
}