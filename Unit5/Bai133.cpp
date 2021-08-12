#include <iostream>
using namespace std;
void OutputPosition(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    double a[5] = {2.3,-3.9,-2.6,1,-13.8};
    OutputPosition(a, 5);
}