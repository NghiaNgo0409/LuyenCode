#include <iostream>
using namespace std;
int main()
{
    int n = 3984;
    int min = n % 10;
    while (n != 0)
    {
        if ((n % 10) <= min)
        {
            min = (n % 10);
        }

        n /= 10;
    }
    cout << min;
}