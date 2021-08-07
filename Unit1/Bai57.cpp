#include <iostream>
using namespace std;
bool CheckFullEven(int n)
{
    while(n != 0)
    {
        if (n % 2 == 1)
        {
            return false;
        }
        n/= 10;
    }
    return true;
}
int main()
{
    cout << CheckFullEven(24688);
}