#include <iostream>
#include <string>
using namespace std;
int STRCMP(string a, string b)
{
    if(a.length() == b.length())
    {
        return 0;
    }
    else if (a.length() > b.length())
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int main()
{
    string a = "Hello";
    string b = "Yes";
    cout << STRCMP(a,b);
}