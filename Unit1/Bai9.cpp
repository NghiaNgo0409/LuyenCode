#include <iostream>
using namespace std;
int MultiplyNNumbers(int n)
{
    if (n==1)
    {
        return 1;
    }
    return n * MultiplyNNumbers(n-1);
}
int main()
{
    int sum = MultiplyNNumbers(5);
    cout << sum;
}