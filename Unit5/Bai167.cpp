#include <iostream>
using namespace std;
bool CheckFullOdd(int n)
{
    while(n != 0)
    {
        if ((n % 10) % 2 != 1)
        {
            return 0;
        }
        n /= 10;
    }
    return 1;
}
int FindFirstValue(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (CheckFullOdd(a[i]))
        {
            return a[i];
        }
    }
    return 0;
}
int main()
{
    int a[] = {2,4,6,131,9};
    cout << FindFirstValue(a, 5);
}