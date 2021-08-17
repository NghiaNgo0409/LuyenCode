#include <iostream>
using namespace std;
void ListNegativeValue(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int a[] = {-1,3,4,-6,12,-29};
    ListNegativeValue(a, 6);
}