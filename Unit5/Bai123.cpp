#include <iostream>
using namespace std;
int FindIndexOfMinValue(int a[], int n)
{
    int min = a[0], pos = 0;
    for(int i = 0; i < n; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
            pos = i;
        }
    }
    return pos;
}
int main()
{
    int a[7] = {3, -2, 84, -29, 8, 12, -5};
    cout << FindIndexOfMinValue(a, 7);
}