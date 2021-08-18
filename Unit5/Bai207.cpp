#include <iostream>
using namespace std;
int SumAllCucTri(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] < a[i-1] && a[i] < a[i-1]) || (a[i] > a[i-1] && a[i] > a[i-1]))
        {
            sum += a[i];
        }
    }
    return sum;
}
int main()
{
    int a[] = {1,3,-2,4,-1,0};
    cout << SumAllCucTri(a, 6);
}