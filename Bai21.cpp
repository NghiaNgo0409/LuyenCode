#include <iostream>
using namespace std;
int VolumeDivisorOfN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}
int main()
{
    int sum = VolumeDivisorOfN(6);
    cout << sum;
}