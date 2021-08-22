#include <iostream>
using namespace std;
void DeleteK(int a[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            n--;
            for(int j = i; j < n; j++)
            {
                a[j] = a[j + 1];
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
    int a[] = {1,2,3,4};
    DeleteK(a, 4, 1);
    Print(a, 3);
}