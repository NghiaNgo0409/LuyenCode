#include<iostream>
using namespace std;
void ListEx191(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    double a[] = {3.2,9.8,-13.5,4.1,2.6};
    ListEx191(a, 5);
}