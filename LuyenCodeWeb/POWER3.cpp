#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long* T = new long long[t];
    for(int i = 0; i < t; i++)
    {
        cin >> T[i];
    }
    for(int i = 0; i < t; i++)
    {
        long long x = pow(T[i],(double)1/3);
        if(pow(x, 3) == T[i] || pow(x + 1, 3) == T[i])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}