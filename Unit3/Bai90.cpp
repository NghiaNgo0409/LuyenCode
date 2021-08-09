#include <iostream>
using namespace std;
int main()
{
    int m = 0;
    int sum = 0;
    while (sum + m + 1 < 21)
    {
        m++;
        sum += m;
    }
    cout << m;
}