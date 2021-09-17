#include <iostream>
using namespace std;
int Factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * Factorial(n - 1);
    }
}
int S(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return Factorial(n) + S(n-1);
    }
}
int main()
{
    cout << S(5);
}