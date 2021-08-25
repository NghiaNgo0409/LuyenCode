#include <iostream>
#include <math.h>
using namespace std;
bool CheckPrime(int n)
{
    if(n < 2)
    {
        return false;
    }
    else
    {
        for(int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
void CreateBEx310(int a[], int b[], int na, int& nb)
{
    nb = 0;
    for(int i = 0; i < na; i++)
    {
        if (CheckPrime(a[i]))
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
    CreateBEx310(a, b, 5, nb);
    Print(b, nb);
}