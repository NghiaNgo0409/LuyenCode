#include <iostream>
using namespace std;
bool IsArrayPalindrome(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[n-i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a[] = {3,2,1};
    cout << IsArrayPalindrome(a, 3);
}