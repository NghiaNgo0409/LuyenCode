#include <iostream>
using namespace std;
int UCLN(int a, int b)
{
    int max = a > b ? a : b;
    int min = a < b ? a : b;
    for (int i = min; i >= 1; i--)
    {
        if (max % i == 0 && min % i == 0)
        {
            return i;
        }
    }
}
int main()
{
    cout << UCLN(12,6);
}