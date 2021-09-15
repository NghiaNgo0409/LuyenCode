#include <iostream>
using namespace std;
int Sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return n + Sum(n-1);
    }
}
int main()
{
    cout << Sum(5);
}