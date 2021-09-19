#include <iostream>
using namespace std;
int SumAllEvenCharacter(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        if((n % 10) % 2 == 0)
        {
            return (n % 10) + SumAllEvenCharacter(n/10);
        }
        return SumAllEvenCharacter(n/10);
    }
}
int main()
{
    cout << SumAllEvenCharacter(498);
}