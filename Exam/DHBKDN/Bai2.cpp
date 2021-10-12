#include <iostream>
using namespace std;
int main()
{
    char c[3];
    char s[3];
    for(int i = 0; i < 3; i++)
    {
        cin >> c[i];
    }
    for(int i = 2, j = 0; i >= 0, j < 3; i--, j++)
    {
        s[j] = c[i];
    }
    for(int i = 0; i < 3; i++)
    {
        cout << s[i];
    }
}