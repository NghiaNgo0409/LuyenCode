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
int CountMaxValue(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == FindMaxValue(a, n))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[] = {-3,2,1,4,4,4,-5};
    cout << CountMaxValue(a, 7);
}