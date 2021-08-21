#include <iostream>
using namespace std;
void ArrangeEx263(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (((a[i] > 0 && a[j] > 0) && (a[i] > a[j])) || ((a[i] < 0 && a[j] < 0) &&(a[i] < a[j])))
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
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
    int a[] = {3,-5,1,4,-1};
    PrintArray(a, 5);
    ArrangeEx263(a, 5);
    PrintArray(a, 5);
}