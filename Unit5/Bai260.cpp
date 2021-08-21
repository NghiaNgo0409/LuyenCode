#include <iostream>
using namespace std;
void ArrangeIncreasing(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
bool CheckHoanVi(int a[], int b[], int na, int nb)
{
    if (na != nb)
    {
        return false;
    }
    else
    {
        ArrangeIncreasing(a, na);
        ArrangeIncreasing(b, nb);
        for (int i = 0; i < na; i++)
        {
            if (a[i] != b[i])
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{
    int a[] = {3,2,6,1,5,4};
    int b[] = {4,1,5,6,2,3};
    cout << CheckHoanVi(a, b, 6,6);
}