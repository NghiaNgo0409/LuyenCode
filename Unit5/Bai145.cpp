#include <iostream>
using namespace std;
bool CheckPerfectNumber(int n)
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
        return 1;
    }
    else 
    {
        return 0;
    }
}
int FindFirstPerfectNumber(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (CheckPerfectNumber(a[i]))
        {
            return a[i];
        }
    }
    return -1;
}
int main()
{
    int a[5] = {3,2,9,289,4};
    cout << FindFirstPerfectNumber(a,5);
}