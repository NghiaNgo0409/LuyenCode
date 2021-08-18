#include <iostream>
using namespace std;
double TBCEx213(double a[], int n, int x)
{
    double sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > x)
        {
            sum += a[i];
            count++;
        }
    }
    return sum/count;
}
int main()
{
    double a[] = {-3.9,1.2,2.4,0.2,5.6,-7.5};
    cout << TBCEx213(a, 6, -3);
}