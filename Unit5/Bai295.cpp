#include <iostream>
using namespace std;
bool CheckIncreasing(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i+1])
        {
            return 0;
        }
    }
    return 1;
}
void PrintSubArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void ArrangePrintIncreasing(int a[], int n)
{
    int length;
    int b[100], nb;
    for(int i = 0; i < n; i++)
    {
        for (length = 1; length <= n; length++)
        {
            nb = 0;
            for (int j = i; j < length; j++)
            {
                b[nb] = a[j];
                nb++;
            }
            if (CheckIncreasing(b, nb))
            {
                PrintSubArray(b, nb);
            }
        }
    }
}
int main()
{
    int a[] = {3,1,2,7,4};
    ArrangePrintIncreasing(a, 5);
}