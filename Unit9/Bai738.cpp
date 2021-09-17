#include <iostream>
using namespace std;
int S(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * S(n-1);
    }
}
int main()
{
    cout << S(5);
}