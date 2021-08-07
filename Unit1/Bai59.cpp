#include <iostream>
using namespace std;
bool IsPalindromeNumber(int n)
{
    int x = n;
    int reverse = 0;
    while (x != 0)
    {
        reverse = reverse * 10 + (x % 10);
        x/=10;
    }
    if (n == reverse)
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
    cout << IsPalindromeNumber(521479);
}