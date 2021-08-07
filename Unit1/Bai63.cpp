#include <iostream> 
using namespace std;
int BCNN(int a, int b)
{
    int max = a > b ? a : b;
    int min = a < b ? a : b;
    for (int i = max; i < a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            return i;
        }
    }
}
int main()
{
    cout << BCNN(12,8);
}