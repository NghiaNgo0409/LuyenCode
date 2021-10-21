#include <iostream>
#include <math.h>
using namespace std;
void gen(int a[], int n)
{
    ++a[n-1];
    for(int i = n - 1; i > 0; i--)
    {
        if(a[i] > 1)
        {
            ++a[i - 1];
            a[i] -= 2;
        }
    }
}
void print(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n; cin >> n;
    int* a = new int[n];
    for(int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    for(int i = 0; i < pow(2, n); i++)
    {
        print(a, n);
        gen(a, n);
    }
}