#include <iostream>
using namespace std;
int UCLN(int a, int b)
{
    while(a != b)
    {
        if(a > b)
        {
            a -= b;
        }
        if(b > a)
        {
            b -= a;
        }
    }
    return a;
}
int main()
{
    int a, b; cin >> a >> b;
    cout << (a * b) / UCLN(a, b);
}