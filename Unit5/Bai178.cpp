#include <iostream>
using namespace std;
void ListEvenXYValue(int a[], int n, int x, int y)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= x && a[i] <= y && a[i] % 2 == 0)
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int a[] = {3,-6,9,2,4,-8,-12};
    ListEvenXYValue(a, 7, -4,7);
}