#include <iostream>
using namespace std;
float Sum(float n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return 1/(n*(n + 1)) + Sum(n - 1);
    }
}
int main()
{
    cout << Sum(5);
}