#include <iostream>
using namespace std;
int CountAmountOfNumbers(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    return count;
}
int main()
{
    cout << CountAmountOfNumbers(1034);
}