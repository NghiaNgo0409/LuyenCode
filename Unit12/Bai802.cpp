#include <iostream>
#include <string>
using namespace std;
string STRCPY(string &dest, string src)
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
int main()
{
    string s = "Hello";
    string b;
    b = STRCPY(b,s);
    cout << b;
}