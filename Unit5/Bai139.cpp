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
int PosOfLastPerfectNumber(int a[], int n)
{
    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (CheckPerfectNumber(a[i]))
        {
            pos = i;
        }
    }
    return pos;
}
int main()
{
    int a[5] = {1,2,3,28,9};
    cout << PosOfLastPerfectNumber(a,5);
}