#include <iostream>
using namespace std;
int MultiplyAllCharacter(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return (n%10) * MultiplyAllCharacter(n/10);
}
int main()
{
    cout << MultiplyAllCharacter(356);
}