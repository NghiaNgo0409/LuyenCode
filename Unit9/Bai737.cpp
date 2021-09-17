#include <iostream>
using namespace std;
float Sum(float n)
{
    if(n == -1)
    {
        return 0;
    }
    else
    {
        return (2*n + 1)/(2*n + 2) + Sum(n-1);
    }
}
int main()
{
    cout << Sum(5);
}