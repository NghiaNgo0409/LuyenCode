#include <iostream>
using namespace std;
int CountAmountOfNumber(int n)
{
    int x = n;
    int count = 0;
    if (n == 0)
    {
        count = 1;
    }
    while(x != 0)
    {
        count++;
        x /= 10;
    }
    return count;
}
int main()
{
    cout << CountAmountOfNumber(15);
}