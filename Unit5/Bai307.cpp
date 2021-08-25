#include <iostream>
using namespace std;
void CreateBEx307(int a[], int b[], int na, int& nb)
{
    nb = 0;
    for(int i = 0; i < na; i++)
    {
        if (a[i] % 2 != 0)
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
    int a[] = {1,2,3,4,5};
    int b[100];
    int nb;
    CreateBEx307(a, b, 5, nb);
    Print(b, nb);
}