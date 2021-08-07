#include <iostream>
using namespace std;
int main()
{
    int n = 333;
    int volume = 1;
    while (n != 0)
    {
        if (n % 2 == 1)
        {
            volume *= (n % 10);
        }

        n /= 10;
    }
    cout << volume;
}