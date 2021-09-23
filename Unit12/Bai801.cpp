#include <iostream>
#include <string>
using namespace std;
int STRLEN(string s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    string s = "Hello";
    cout << STRLEN(s);
}