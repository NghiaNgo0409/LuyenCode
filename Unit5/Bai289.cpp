#include <iostream>
using namespace std;
void Print2ArrayEvenOdd(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
int main()
{
    int a[] = {1,2,3,4,5};
    Print2ArrayEvenOdd(a, 5);
}