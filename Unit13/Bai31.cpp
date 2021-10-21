#include <iostream>
using namespace std;
int main()
{
    char s[200];
    fflush(stdin);
    fgets(s, 200, stdin);
    int count = 0;
    while(s[count] != '\0')
    {
        count++;
    }
    cout << count - 1;
}