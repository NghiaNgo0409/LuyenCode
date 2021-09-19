#include <iostream>
using namespace std;
float S(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return 1/(1+S(n-1));
    }
}
int main()
{
    cout << S(5);
}