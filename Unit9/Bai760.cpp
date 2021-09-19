#include <iostream>
using namespace std;
int FindMaxCharacter(int n, int max = 0)
{
    if (n == 0)
    {
        return max;
    }
    return FindMaxCharacter(n/10, max > n % 10 ? max : n % 10);
}
int main()
{
    cout << FindMaxCharacter(1982);
}