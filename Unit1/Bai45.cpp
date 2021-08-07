#include <iostream>
using namespace std;
int VolumeAmountOfNumber(int n)
{
    int x = n;
    int volume = 1;
    if (n == 0)
    {
        volume = 0;
    }
    while(x != 0)
    {
        volume *= x % 10;
        x /= 10;
    }
    return volume;
}
int main()
{
    cout << VolumeAmountOfNumber(100);
}