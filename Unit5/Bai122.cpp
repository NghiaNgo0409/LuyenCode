#include <iostream>
using namespace std;
int FindMaxInArray(int a[], int n)
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
int main()
{
    int a[5] = {3, 9, 15, 56, 8};
    cout << FindMaxInArray(a, 5);
}