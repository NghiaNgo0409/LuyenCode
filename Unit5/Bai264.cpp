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
void Merge2ArrayInIncreasing(int a[], int b[], int c[], int na, int nb, int& nc)
{
    nc = na + nb;
    ArrangeIncreasing(a, na);
    ArrangeIncreasing(b, nb);
    int indexA = 0, indexB = 0;
    for (int i = 0; i < nc; i++)
    {
        if (indexA < na && indexB < nb)
        {
            if (a[indexA] < b[indexB])
            {
                c[i] = a[indexA++];
            }
            else
            {
                c[i] = b[indexB++];
            }
        }
        else if (indexB == nb)
        {
            c[i] = a[indexA++];
        }
        else
        {
            c[i] = b[indexB++];
        }
    }
}
void PrintArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[] = {3,4,1,5,2};
    int b[] = {9,6,10,8,7};
    int c[100];
    int nc;
    Merge2ArrayInIncreasing(a, b, c, 5, 5, nc);
    PrintArray(c, nc);
}