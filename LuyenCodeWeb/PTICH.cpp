#include <iostream>
using namespace std;
long long dem[1000000];
int main()
{
    long long n; cin >> n;
    for(long long i = 0; i <= n; i++)
    {
        dem[i] = 0;
    }
    for(long long i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            ++dem[i];
            n /= i;
        }
    }
    for(long long i = 0; i <= n; i++)
    {
        if(dem[i])
        {
            cout << i << " " << dem[i] << "\n";
        }
    }
}