#include <iostream>
using namespace std;
int SumInArray(int a[], int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        if(a[n - 1] % 2 == 0)
        {
            return a[n - 1] + SumInArray(a, n - 1);
        }
        else
        {
            return SumInArray(a, n - 1);
        }
    }
}
int main()
{
    int a[5] = {2, 4, 6, 8, 10};
    cout << SumInArray(a, 5);
}