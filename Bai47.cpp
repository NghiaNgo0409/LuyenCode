#include <iostream>
using namespace std;
int main()
{
    int n = 456;
    int sum = 0;
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            sum += (n % 10);
        }

        n /= 10;
    }
    cout << sum;
}