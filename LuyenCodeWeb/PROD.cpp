#include <iostream>
using namespace std;
int main()
{
    int a, b; cin >> a >> b;
    int temp = a * b;
    if(a * b > 0) 
    {
        cout << 1;
    }
    else if (a * b < 0)
    {
        cout << -1;
    }
    else 
    {
        cout << 0;
    }
}