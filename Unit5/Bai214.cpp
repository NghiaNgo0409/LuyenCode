#include <iostream>
using namespace std;
double TBNPositiveValue(double a[], int n)
{
    double res = 1;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            res *= a[i];
            count++;
        }
    }
    return res/count;
}
int main()
{
    double a[] = {-3.9,2.4,2.5,-0.1,9.5};
    cout << TBNPositiveValue(a, 5);
}