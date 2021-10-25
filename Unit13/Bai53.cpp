#include <iostream>
using namespace std;
int main()
{
    int n, temp = 0;
    cin >> n;
    while(n > 0)
    {
        int x = n % 10;
        temp = temp * 10 + x;
        n /= 10;
    }
    cout << temp;
}