#include <iostream>
using namespace std;
void Round(float& n)
{
    int integer = (int)n;
    float point = n - integer;
    if (point < 0.5)
    {
        n = (float)integer;
    }
    else
    {
        n = (float)integer + 1;
    }
}
void RoundAllArray(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        Round(a[i]);
    }
}
void Print(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    float a[] = {3.4,2.8,6.1,-7.2,9.5};
    Print(a, 5);
    RoundAllArray(a, 5);
    Print(a, 5);
}