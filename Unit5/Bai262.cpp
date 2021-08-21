#include <iostream>
using namespace std;
void ArrangeEx262(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (((a[i] % 2 == 0 && a[j] % 2 == 0) || (a[i] % 2 != 0 && a[j] % 2 != 0)) && (a[i] > a[j]))
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
    int a[] = {3,6,1,4,5};
    PrintArray(a, 5);
    ArrangeEx262(a, 5);
    PrintArray(a, 5);
}