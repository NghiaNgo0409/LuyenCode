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
int main()
{
    for(int i = 2; i <= 1000; i++)
    {
        if(isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}