#include <iostream>
using namespace std;
int SumOdd(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            sum += i;
        }
    }
    return sum;
}
int main()
{
    cout << SumOdd(15);
}