#include <iostream>
using namespace std;
bool CheckIncreasing(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i+1])
        {
            return 0;
        }
    }
    return 1;
}
int FindMax(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
        }
    }
    return max;
}
bool CheckMax(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == FindMax(a, n))
        {
            return true;
        }
    }
    return false;
}
void Print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void Ex296(int a[], int n)
{
    int length;
    int b[100], nb;
    for(int i = 0; i < n; i++)
    {
        for (length = 1; length <= n; length++)
        {
            nb = 0;
            for(int j = i; j < length; j++)
            {
                b[nb] = a[j];
                nb++;
            }
            if (CheckIncreasing(b, nb))
            {
                if (CheckMax(b, nb))
                {
                    Print(b, nb);
                }
            }
        }
    }
}
int main()
{
    int a[] = {3,1,4,5,2};
    Ex296(a, 5);
}

