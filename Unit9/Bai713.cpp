#include <iostream>
using namespace std;
int X(int n)
{
    if(n == 0)
    {
        return 1;
    }
    int s = 0;
    for(int i = 1; i <= n; i++)
    {
        s += i * i * X(n-i);
    }
    return s;
}
int main()
{
    cout << X(3);
}