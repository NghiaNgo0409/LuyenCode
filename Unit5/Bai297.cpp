#include <iostream>
using namespace std;
bool CheckIncrease(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return false;
        }
    }
    return true;
}
void PrintSubSpace(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void SumSubSpace(int a[], int n)
{
    int length, nb, sum;
    int b[100];
    for(int i = 0; i < n; i++)
    {
        for(length = 1; length <= n; length++)
        {
            nb = 0;
            for(int j = i; j < length; j++)
            {
                b[nb] = a[j];
                nb++;
            }
            if (CheckIncrease(b, nb))
            {
                PrintSubSpace(b, nb);
                for(int k = 0; k < nb; k++)
                {
                    sum += b[k];
                }
                cout << sum << endl;
            }
        }
    }
}
int main()
{
    int a[5] = {5,1,3,2,4};
    SumSubSpace(a, 5);
}