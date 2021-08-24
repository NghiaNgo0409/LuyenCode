#include <iostream>
using namespace std;
int FindMax(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
        }
    }
    return max;
}
int FindMin(int a[], int n)
{
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
        }
    }
    return min;
}
void ReverseMaxMin(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((a[i] == FindMax(a, n) && a[j] == FindMin(a, n)) || (a[j] == FindMax(a, n) && a[i] == FindMin(a, n)))
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void Print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[] = {1,2,3,4,5};
    Print(a, 5);
    ReverseMaxMin(a, 5);
    Print(a, 5);
}