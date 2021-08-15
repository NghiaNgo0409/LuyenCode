#include <iostream>
using namespace std;
int FindMaxValue(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
        }
    }
    return max;
}
int FindBCNN(int a[], int n)
{
    int BCNN = FindMaxValue(a, n);
    for (int i = 0; i < n; i++)
    {
        if (BCNN % a[i] != 0)
        {
            BCNN += FindMaxValue(a, n);
            i = -1;
        }
    }
    return BCNN;
}
int main()
{
    int a[5] = {2,4,6,15,32};
    cout << FindBCNN(a, 5);
}