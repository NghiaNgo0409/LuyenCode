#include <iostream>
using namespace std;
int SumNegativeValue(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            sum += a[i];
        }
    }
    return sum;
}
int main()
{
    int a[5] = {-3,-4,2,8,9};
    cout << SumNegativeValue(a, 5);
}