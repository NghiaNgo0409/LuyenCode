#include <iostream>
using namespace std;
int Multiply(int a[], int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        if(a[n-1] > a[n-2])
        {
            return a[n-1] * Multiply(a, n-1);
        }
        return Multiply(a, n - 1);
    }
}
int main()
{
    int a[5] = {1,2,3,4,5};
    cout << Multiply(a, 5);
}