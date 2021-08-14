#include <iostream>
using namespace std;
int FindFirstValueInBracket(int a[], int n, int x, int y)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= x && a[i] <= y)
        {
            return a[i];
        }
    }
    return -1;
}
int main()
{
    int a[5] = {3,2,9,-8,5};
    cout << FindFirstValueInBracket(a, 5, -8, 2);
}