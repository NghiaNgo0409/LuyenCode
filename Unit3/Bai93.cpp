#include <iostream>
using namespace std;
bool CheckPrimeNumber(int n)
{
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
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
    cout << CheckPrimeNumber(12);
}