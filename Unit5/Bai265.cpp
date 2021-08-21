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
void Merge2ArrayToDecreasing(int a[], int b[], int c[], int na, int nb, int& nc)
{
    nc = na + nb;
    ArrangeIncreasing(a, na);
    ArrangeIncreasing(b, nb);
    int indexA = na - 1, indexB = nb - 1;
    for (int i = 0; i < nc; i++)
    {
        if (indexA >= 0 && indexB >= 0)
        {
            if (a[indexA] > b[indexB])
            {
                c[i] = a[indexA--];
            }
            else
            {
                c[i] = b[indexB--];
            }
        }
        else if (indexB < 0)
        {
            c[i] = a[indexA--];
        }
        else
        {
            c[i] = b[indexB--];
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
    int a[] = {2,4,5,1,3};
    int b[] = {7,10,6,8,9};
    int c[100];
    int nc;
    Merge2ArrayToDecreasing(a, b, c, 5, 5, nc);
    PrintArray(c, nc);
}