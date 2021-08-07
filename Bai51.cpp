#include <iostream>
using namespace std;
int main()
{
    int n = 1928;
    int max = 0;
    while (n != 0)
    {
        if ((n % 10) >= max)
        {
            max = (n % 10);
        }

        n /= 10;
    }
    cout << max;
}