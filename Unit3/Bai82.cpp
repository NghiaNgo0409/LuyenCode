#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "Max la " << a;
    }
    else if (b > a && b > c)
    {
        cout << "Max la " << b; 
    }
    else if (c > a && c > b)
    {
        cout << "Max la " << c;
    }
}