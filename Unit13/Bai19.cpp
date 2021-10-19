#include <iostream>
using namespace std;
bool isFullEven(int n)
{
    while(n != 0)
    {
        int temp = n % 10;
        if(temp % 2 != 0)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
int main()
{
    cout << isFullEven(2148);
}