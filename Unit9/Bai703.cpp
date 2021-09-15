#include <iostream>
using namespace std;
int T(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * T(n-1);
    }
}
int main()
{
    cout << T(5);
}