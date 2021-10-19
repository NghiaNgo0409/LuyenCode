#include <iostream>
using namespace std;
int S(int n)
{
    if(n == 1) return 1;
    return n + S(n - 1);
}
int main()
{
    cout << S(5);
}