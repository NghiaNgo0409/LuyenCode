#include <iostream>
using namespace std;
bool Check2k(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    else
    {
        while(n > 1)
        {
            if (n % 2 != 0)
            {
                return 0;
            }
            n /= 2;
        }
        return 1;
    }
}
int FindFirst2K(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if (Check2k(a[i]))
        {
            return a[i];
        }
    }
    return 0;
}
int main()
{
    int a[] = {9,32,8,321,36};
    cout << FindFirst2K(a, 5);
}