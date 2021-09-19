#include <iostream>
using namespace std;
int MultiplyOddAllCharacter(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        if((n%10) % 2 != 0)
        {
            return (n%10) * MultiplyOddAllCharacter(n/10);
        }
        return MultiplyOddAllCharacter(n/10);
    }
}
int main()
{
    cout << MultiplyOddAllCharacter(345);
}