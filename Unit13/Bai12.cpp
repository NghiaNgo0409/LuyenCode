#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int x = n;
    int sum = 0;
    while(x != 0)
    {
        if((x % 10) % 2 == 0)
        {
            sum += x % 10;
        }
        x /= 10;
    }
    cout << sum << endl;
}