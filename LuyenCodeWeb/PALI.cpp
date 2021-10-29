#include <iostream>
using namespace std;
bool isPalindrome(int n)
{
    int x = 0, temp = n;
    while(temp > 0)
    {
        x = x * 10 + temp % 10;
        temp /= 10;
    }
    if(x == n)
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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    while(n--)
    {
        int a; cin >> a;
        if(isPalindrome(a))
        {
            cout << a << " ";
        }
    }
}