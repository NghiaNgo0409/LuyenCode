#include <iostream>
using namespace std;
void CreateB309(int a[], int b[], int na, int& nb)
{
    nb = 0;
    for(int i = 0; i < na; i++)
    {
        if (i == 0 && nb == 0)
        {
            b[nb] = a[i + 1];
            nb++;
        }
        else if (i == na - 1)
        {
            b[nb] = a[i -1];
            nb++;
        }
        else
        {
            b[nb] = a[i-1] + a[i+1];
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
    int a[] = {1,2,3,4,5};
    int b[100], nb;
    CreateB309(a, b, 5, nb);
    Print(b, nb);
}