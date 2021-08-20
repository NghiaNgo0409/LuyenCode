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
        return true;
    }
    else
    {
        return false;
    }
}
bool Ex244(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (CheckPerfectNumber(a[i]) && a[i] > 256)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a[] = {2,4,6,28,7};
    cout << Ex244(a, 5);
}