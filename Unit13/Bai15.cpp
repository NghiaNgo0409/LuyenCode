#include <iostream>
using namespace std;
int Factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    return n * Factorial(n - 1);
}
int Combination(int k, int n)
{
    return Factorial(n) / (Factorial(k) * Factorial(n - k));
}
int main()
{
    cout << Combination(3, 5);
}