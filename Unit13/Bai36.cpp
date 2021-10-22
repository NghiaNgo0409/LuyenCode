#include <iostream>
using namespace std;
bool isPalindrome(int n)
{
    int x = 0;
    int num = n;
    while(num != 0)
    {
        int temp = num % 10;
        x = x * 10 + temp;
        num /= 10;
    }
    if(n == x)
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
    int a[5] = {1,3,212, 343, 12};
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        if(isPalindrome(a[i]))
        {
            sum += a[i];
        }
    }
    cout << sum;
}