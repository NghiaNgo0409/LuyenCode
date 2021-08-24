#include <iostream>
using namespace std;
void ReversePositive(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > 0 && a[j] > 0)
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
    int a[] = {1,2,-4,5,-6,8};
    Print(a, 6);
    ReversePositive(a, 6);
    Print(a, 6);
}