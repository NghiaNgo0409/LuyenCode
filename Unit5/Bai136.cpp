#include <iostream>
using namespace std;
int FindLastEvenValue(int a[], int n)
{
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            index = a[i];
        }
    }
    return index;
}
int main()
{
    int a[5] = {1,3,9,5,7};
    cout << FindLastEvenValue(a, 5);
}