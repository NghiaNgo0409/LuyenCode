#include <iostream>
using namespace std;
bool isPalindrome(int n)
{
    int x = n;
    int sum = 0;
    while(x != 0)
    {
        sum = sum * 10 + (x % 10);
        x /= 10;
    }
    if(sum == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    cout << isPalindrome(3243);
}