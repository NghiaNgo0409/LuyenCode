#include <iostream>
using namespace std;
int SumN(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + SumN(n-1);
}
int main()
{
    cout << SumN(5);
}