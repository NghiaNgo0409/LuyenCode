#include <iostream>
using namespace std;
int CountOddCharacter(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        if((n%10) % 2 == 0)
        {
            return 0;
        }
        return CountOddCharacter(n/10);
    }
}
int main()
{
    cout << CountOddCharacter(315);
}