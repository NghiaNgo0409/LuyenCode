#include <iostream>
using namespace std;
void ArrangePositiveIncreasing(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > 0 && a[j] > 0)
            {
                if (a[i] > a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }
}
void PrintArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[] = {9,-2,1,4,-3,2};
    PrintArray(a, 6);
    ArrangePositiveIncreasing(a, 6);
    PrintArray(a, 6);
}