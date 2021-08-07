#include <iostream>
using namespace std;
int SumNNumbers(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + SumNNumbers(n-1);
}
int main()
{
    int sum = SumNNumbers(10);
    cout << sum;
    return 0;
}