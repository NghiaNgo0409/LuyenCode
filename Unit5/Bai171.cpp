#include <iostream>
using namespace std;
int FindMinValue(int a[], int n)
{
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
        }
    }
    return min;
}
bool CheckUocSoChung(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % x != 0)
        {
            return 0;
        }
    }
    return 1;
}
int FindUocSoChungMax(int a[], int n)
{
    for (int i = FindMinValue(a, n); i >= 1; i--)
    {
        if (CheckUocSoChung(a, n, i))
        {
            return i;
        }
    }
    return 1;
}
int main()
{
    int a[] = {22,36,58,84,120};
    cout << FindUocSoChungMax(a, 5);
}