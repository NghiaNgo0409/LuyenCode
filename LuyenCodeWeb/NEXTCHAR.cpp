#include <iostream>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if(c >= 'a' && c < 'z')
    {
        c++;
    }
    else if (c == 'z')
    {
        c = 'a';
    }
    cout << c;
} 