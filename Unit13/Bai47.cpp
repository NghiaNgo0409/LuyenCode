#include <iostream>
using namespace std;
int main()
{
    int sum = 1;
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0 && i % 2 != 0)
        {
            sum *= i;
        }
    }
    cout << sum;
}