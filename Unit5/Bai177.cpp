#include <iostream>
using namespace std;
void ListXYValue(double a[], int n, int x, int y)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= x && a[i] <= y)
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    double a[] = {12.4,-9.7,7.5,4.2,-0.3,1.4};
    ListXYValue(a, 6, -5,5);
}