#include <iostream>
using namespace std;
bool IsRootOf2(int n)
{
    int count = 0;
    while (n != 1)
    {
        if (n % 2 != 0)
        {
            return false;
        }
        else
        {
            count++;
        }
        n /= 2;
    }
    return true;
}
int main()
{
    cout << IsRootOf2(28);
}