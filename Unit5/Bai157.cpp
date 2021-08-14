#include <iostream>
using namespace std;
double MinOfValue(double a[], int n)
{
    double min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
        }
    }
    return min;
}
double MaxOfValue(double a[], int n)
{
    double max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
        }
    }
    return max;
}
void FindBracket(double a[], int n)
{
    double min = MinOfValue(a, n);
    double max = MaxOfValue(a, n);
    cout << "Gia tri cua mang: " << endl;
    cout << "[ " << min << "  " << max << " ]";
    
}
int main()
{
    double a[5] = {2.5,8.9,-11,0.2,5.6};
    FindBracket(a, 5);
}