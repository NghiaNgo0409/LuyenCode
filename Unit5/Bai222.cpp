#include <iostream>
using namespace std;
int CountSurrounding(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 && a[i] != a[i + 1])
        {
            count++;
        }
        else if (i == n - 1 && a[i] != a[i - 1])
        {
            count++;
        }
        else if ((a[i - 1] > a[i] && a[i] < a[i + 1]) || (a[i - 1] < a[i] && a[i] > a[i + 1]))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[] = {3,2,1,-4,5,7};
    cout << CountSurrounding(a, 6);
}