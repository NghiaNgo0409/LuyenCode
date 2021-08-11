#include <iostream>
using namespace std;
int PowNofX(int x, int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= x;
    }
    return result;
}
int main()
{
    cout << PowNofX(5,3);
}