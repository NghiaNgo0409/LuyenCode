#include <iostream>
using namespace std;
int CountNearEvenValue(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (i == n - 2 && a[i] % 2 == 0 && a[i+1] % 2 == 0)
        {
            count++;
        }
        else if (a[i] % 2 == 0 && a[i+1] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[] = {3,2,4,1,12,7};
    cout << CountNearEvenValue(a, 6);
}