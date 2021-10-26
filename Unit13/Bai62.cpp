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
    int a[5] = {1, 2, 3, 4, 5};
    int count = 0;
    for(int i = 0; i < 5; i++)
    {
        if(isPrime(a[i]))
        {
            cout << a[i] << " ";
            count++;
        }
    }
    cout << endl; cout << count;
}