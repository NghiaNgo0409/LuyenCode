#include<iostream>
using namespace std;
bool CheckPalindromeNumber(int n)
{
    int x = n;
    int a = 0;
    while (x != 0)
    {
        a = a * 10 + x % 10;
        x /= 10;
    }
    if (x == n)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int CountPalindrome(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    int a[] = {11,121,333,44};
    cout << CountPalindrome(a, 4);
}