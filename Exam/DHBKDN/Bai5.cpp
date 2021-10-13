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
    int n; cin >> n;
    int* prime = new int[n];
    int i = 2, k = 0;
    while(k < n)
    {
        if(isPrime(i))
        {
            prime[k++] = i;
        }
        i++;
    }
    for(int j = 0; j < n; j++)
    {
        cout << prime[j] << " ";
    }
    cout << endl;
}