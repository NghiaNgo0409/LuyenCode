#include <iostream>
using namespace std;
int main()
{
    int n = 9687;
    if (n < 10)
    {
        cout << n;
    }
    else
    {
        while (n >= 10)
        {
            n /= 10;
        }
        cout << n;
    }
}