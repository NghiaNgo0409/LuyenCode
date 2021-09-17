#include <iostream>
using namespace std;
int T(int x, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return x * T(x, n - 1);
    }
}
int main()
{
    cout << T(5,2);
}