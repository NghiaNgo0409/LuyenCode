#include <iostream>
using namespace std;
bool CheckDecreasing(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            return false;
        }
    }
    return true;
}
void Print(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void CountDecreasingSubSpace(int a[], int n)
{
    int length, count = 0;
    int b[100], nb;
    for (int i = 0; i < n; i++)
    {
        for (length = 1 + i; length <= n; length++)
        {
            nb = 0;
            for (int j = i; j < length; j++)
            {
                b[nb] = a[j];
                nb++;
            }
            if (CheckDecreasing(b, nb))
            {
                Print(b, nb);
                count++;
            }
        }
    }
    cout << count << endl;
}
int main()
{
    int a[] = {5,4,3,1,2};
    CountDecreasingSubSpace(a, 5);
}