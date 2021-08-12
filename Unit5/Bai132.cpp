#include <iostream>
using namespace std;
void OutputPositiveValue(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int a[5] = {1,2,-3,-4,5};
    OutputPositiveValue(a, 5);
}