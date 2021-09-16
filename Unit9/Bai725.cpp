#include <iostream>
using namespace std;
bool IsFullNegative(int a[], int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        if(a[n-1] >= 0)
        {
            return 0;
        }
        return IsFullNegative(a, n - 1);
    }
}
int main()
{
    int a[5] = {-1,-2,-3,-4,-5};
    cout << IsFullNegative(a, 5);
}