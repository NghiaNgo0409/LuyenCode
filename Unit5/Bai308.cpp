#include <iostream>
using namespace std;
void CreateBNegative(int a[], int b[], int na, int& nb)
{
    nb = 0;
    for (int i = 0; i < na; i++)
    {
        if (a[i] < 0)
        {
            b[nb] = a[i];
            nb++;
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
    int a[] = {-3,-2,4,5,-1};
    int b[100];
    int nb;
    CreateBNegative(a, b, 5, nb);
    Print(b, nb);
}