#include <iostream>
using namespace std;
bool IsIncreaseFromLeft(int n)
{
    int check = n % 10;
    while (n != 0)
    {
        n/=10;
        if (check <= n % 10)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cout << IsIncreaseFromLeft(612345);
}