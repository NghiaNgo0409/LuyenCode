#include <iostream>
using namespace std;
bool CheckPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void ArrangePerfectDecreasing(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if (CheckPerfect(a[i]) && CheckPerfect(a[j]))
            {
                if (a[i] < a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
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
    int a[] = {3,1,2,6,5,7,28};
    PrintArray(a, 7);
    ArrangePerfectDecreasing(a, 7);
    PrintArray(a, 7);
}