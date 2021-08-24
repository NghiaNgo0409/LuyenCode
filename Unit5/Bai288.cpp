#include <iostream>
#include <Windows.h>
using namespace std;
void textcolor(int x)
{
    HANDLE mau;
    mau = GetStdHandle
        (STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(mau, x);
}
void PrintColor(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            textcolor(7);
            cout << a[i] << " ";
        }
        else
        {
            textcolor(14);
            cout << a[i] << " ";

        }
    }
}
int main()
{
    int a[] = {1,2,3,4,5};
    PrintColor(a, 5);
}