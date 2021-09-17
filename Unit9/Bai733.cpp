#include <iostream>
using namespace std;
float Sum(float n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return 1/(2*n) + Sum(n-1);
    }
}
int main()
{
    cout << Sum(5);
}