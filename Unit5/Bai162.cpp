#include <iostream>
using namespace std;
int FindXIndex(double a[], int n)
{
    for (int i = 1; i < n - 2; i++)
    {
        if (a[i] == a[i-1] * a[i+1])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    double a[5] = {2.2,3,2,3.6,0.8};
    cout << FindXIndex(a, 5);
}