#include <iostream>
using namespace std;
int FindFirstCharacter(int n)
{
    if(n < 10 && n > 0)
    {
        return n;
    }
    return FindFirstCharacter(n/10);
}
int main()
{
    cout << FindFirstCharacter(1982);
}