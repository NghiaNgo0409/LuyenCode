#include <iostream>
using namespace std;
int Sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n + Sum(n-1);
}
float S(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return (float)1/Sum(n) + S(n-1);
    }
}
int main()
{
    cout << S(5);
}