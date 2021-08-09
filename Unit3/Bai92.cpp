#include <iostream>
using namespace std;
int main()
{
    int a, b, min;
    cin >> a >> b;
    if (a < b)
    {
        min = a;
    }
    else if (a > b)
    {
        min = b;
    }
    for (int i = min; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << i;
            break;
        }
    }
}