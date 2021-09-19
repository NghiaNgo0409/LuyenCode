#include <iostream>
using namespace std;
int SumAllCharacter(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n%10 + SumAllCharacter(n/10);
}
int main()
{
    cout << SumAllCharacter(356);
}