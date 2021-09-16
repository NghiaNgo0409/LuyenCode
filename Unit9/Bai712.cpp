#include <iostream>
using namespace std;
int Y(int n);
int X(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return X(n-1) + Y(n-1);
    }
}
int Y(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return 3 * X(n - 1) + 2*Y(n - 1);
    }
}
int main()
{
    cout << X(3) << endl;
    cout << Y(3) << endl;
}