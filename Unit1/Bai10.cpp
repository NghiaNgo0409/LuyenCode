#include <iostream>
using namespace std;
int Root(int x, int n)
{
    int result = x;
    while (n == 1)
    {
        return result;
    }
    return result * Root(x,n-1);
    
}
int main()
{
    int x = 5;
    x = Root(x,2);
    cout << x;
}