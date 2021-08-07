#include <iostream>
using namespace std;
int SumAmountOfNumber(int n)
{
    int x = n;
    int sum = 0;
    if (n == 0)
    {
        sum = 0;
    }
    while(x != 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int main()
{
    cout << SumAmountOfNumber(379);
}