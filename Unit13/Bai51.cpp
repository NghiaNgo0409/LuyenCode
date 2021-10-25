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
void Eratosthenes()
{
    int N = 1000;
    bool* check = new bool[N + 1];
    for(int i = 2; i <= N; i++)
    {
        check[i] = true;
    }
    for(int i = 2; i <= N; i++)
    {
        if(check[i] == true)
        {
            for(int j = i * 2; j <= N; j += i)
            {
                check[j] = false;
            }
        }
    }
    for(int i = 2; i <= N; i++)
    {
        if(check[i] == true)
        {
            cout << i << " ";
        }
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
    Eratosthenes();
}
