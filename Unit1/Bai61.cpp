#include <iostream>
using namespace std;
bool IsDecreaseFromLeft(int n)
{
    int check = n % 10;
    while (n != 0)
    {
        if (check > n % 10)
        {
            return false;
        }
        n/=10;
    }
    return true;
}
int main()
{
    cout << IsDecreaseFromLeft(54325);
}