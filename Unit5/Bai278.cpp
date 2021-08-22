#include <iostream>
using namespace std;
void DeleteDuplicate(int a[], int& n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                n--;
                for (int k = j; k < n; k++)
                {
                    a[k] = a[k+1];
                }
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
int main()
{
    int a[7] = {1,2,3,4,1,2,5};
    int n = 7;
    Print(a, n);
    DeleteDuplicate(a, n);
    Print(a, n);
}