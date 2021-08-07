#include <iostream>
using namespace std;
int CountDivisorOfN(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int sum = CountDivisorOfN(4);
    cout << sum;
}