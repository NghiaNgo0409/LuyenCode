#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int x;
    while(n != 0)
    {
        x = n % 10;
        n /= 10;
    }
    cout << x;
}