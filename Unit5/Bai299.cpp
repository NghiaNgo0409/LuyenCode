#include <iostream>
using namespace std;
bool CheckPositive(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            return false;
        }
    }
    return true;
}
void PrintSubSpace(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void PrintPositiveSubSpace(int a[], int n)
{
    int length;
    int b[100], nb;
    for(int i = 0; i < n; i++)
    {
        for (length = 2 + i; length <= n; length++)
        {
            nb = 0;
            for(int j = i; j < length; j++)
            {
                b[nb] = a[j];
                nb++;
            }
            if (CheckPositive(b, nb))
            {
                PrintSubSpace(b, nb);
            }
        }
    }
}
int main()
{
    int a[] = {-5,2,3,-4,1};
    PrintPositiveSubSpace(a, 5);
}