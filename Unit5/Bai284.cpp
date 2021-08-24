#include <iostream>
using namespace std;
void ReverseEven(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if (a[i] % 2 == 0 && a[j] % 2 == 0)
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
    int a[] = {1,2,3,4,5,6};
    Print(a, 6);
    ReverseEven(a, 6);
    Print(a, 6);
}