#include <iostream>
using namespace std;
int CountEvenValue(int a[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[] = {3,4,6,11,13};
    cout << CountEvenValue(a, 5);
}