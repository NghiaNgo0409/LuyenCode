#include <iostream>
using namespace std;
bool IsPerfectNumber(int n)
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
int main()
{
    cout << IsPerfectNumber(30);
}