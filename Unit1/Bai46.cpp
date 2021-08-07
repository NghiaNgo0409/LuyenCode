#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    int n = 333;
    int count = 0;
    while (n != 0)
    {
        if (n % 2 == 1)
        {
            count++;
        }
        n /= 10;
    }
    cout << count;
}