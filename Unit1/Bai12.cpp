#include <iostream>
using namespace std;
int SumRoot(int x, int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int result = x;
        if (i == 1)
        {
            sum += result;
        }
        else
        {
            for (int j = 2; j <= i; j++)
            {
                result *= x;
            }
            sum += result;
        }
        
    }
    return sum;
}
int main()
{
    int sum = SumRoot(5,4);
    cout << sum;
}