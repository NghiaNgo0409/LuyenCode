#include <iostream>
using namespace std;
int CountCharacter(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1 + CountCharacter(n/10);
}
int main()
{
    cout << CountCharacter(356);
}