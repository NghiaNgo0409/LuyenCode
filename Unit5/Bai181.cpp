#include <iostream>
using namespace std;
void ListEx181(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && (a[i-1] % 2 == 0 || a[i+1] % 2 == 0))
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int a[] = {3,1,-4,-6,10,-7,-9};
    ListEx181(a, 7);
}