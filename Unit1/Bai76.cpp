#include <iostream>
using namespace std;
bool IsRootOf3(int n)
{
    int count = 0;
    while (n != 1)
    {
        if (n % 3 != 0)
        {
            return false;
        }
        else
        {
            count++;
        }
        n /= 3;
    }
    return true;
}
int main()
{
    cout << IsRootOf3(27);
}