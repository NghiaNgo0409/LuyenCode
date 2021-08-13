#include <iostream> 
using namespace std;
double FindLastPositiveValue(double a[], int n)
{
    double num = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            num = a[i];
        }
    }
    return num;
}
int main()
{
    double a[5] = {-3.2,4.6,7.3,5.5,-10};
    cout << FindLastPositiveValue(a, 5);
}