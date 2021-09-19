#include <iostream>
using namespace std;
int Reverse(int n, int num = 0)
{
    if (n == 0)
    {
        return num;
    }
    return Reverse(n / 10, num * 10 + n % 10);
}
int main()
{
    cout << Reverse(1982);
}