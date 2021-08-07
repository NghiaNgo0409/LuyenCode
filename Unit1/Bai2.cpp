#include <iostream>
using namespace std;
int SumSquareNNumbers(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n*n + SumSquareNNumbers(n-1);
}
int main()
{
    int sum = SumSquareNNumbers(5);
    cout << sum;
}