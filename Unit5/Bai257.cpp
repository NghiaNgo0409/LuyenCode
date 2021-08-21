#include <iostream>
using namespace std;
void ArrangeOddIncreasing(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] % 2 != 0 && a[j] % 2 != 0)
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
    int a[] = {4,9,3,2,5,7,6};
    PrintArray(a, 7);
    ArrangeOddIncreasing(a, 7);
    PrintArray(a, 7);
}