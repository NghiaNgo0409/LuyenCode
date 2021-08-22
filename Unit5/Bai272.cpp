#include <iostream>
using namespace std;
double FindMax(double a[], int& n)
{
    double max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
void DeleteMax(double a[], int& n)
{
    double max = FindMax(a, n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == max)
        {
            n--;
            for (int j = i; j < n; j++)
            {
                a[j] = a[j+1];
            }
        }
    }
}
void Print(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    double a[] = {3.4,9.6,1.6,7.8};
    int n = 4;
    Print(a, n);
    DeleteMax(a , n);
    Print(a, n);
}