#include <iostream>
using namespace std;
void ArrangeIncreasing(int a[], int n)
{
    for (int i = 0; i < n -1; i++)
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
void Print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void AddIncreasing(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (x < a[i])
        {
            int temp = x;
            for (int j = n; j > i; j--)
            {
                a[j] = a[j-1];
            }
            a[i] = temp;
            break;
        }
    }
    n++;
}
int main()
{
    int a[4] = {2,3,4,5};
    AddIncreasing(a, 4, 1);
    Print(a, 5);
}