#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int n)
{
    if(n < 2)
    {
        return false;
    }
    else
    {
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
int SumPrime(int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(isPrime(i))
        {
            sum += i;
        }
    }
    return sum;
}
int main()
{
    int n; cin >> n;
    cout << SumPrime(n);
}