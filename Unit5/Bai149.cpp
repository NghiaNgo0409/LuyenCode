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
int FindLastPerfectNumber(int a[], int n)
{
    int num = -1;
    for (int i = 0; i < n; i++)
    {
        if (CheckPerfectNumber(a[i]))
        {
            num = a[i];
        }
    }
    return num;
}
int main()
{
    int a[5] = {2,3,4,6,28};
    cout << FindLastPerfectNumber(a , 5);
}