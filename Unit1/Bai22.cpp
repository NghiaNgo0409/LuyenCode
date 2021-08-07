#include <iostream>
using namespace std;
int VolumeDivisorOfN(int n)
{
    int volume = 1;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            volume *= i;
        }
    }
    return volume;
}
int main()
{
    int sum = VolumeDivisorOfN(6);
    cout << sum;
}