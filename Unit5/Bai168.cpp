#include <iostream>
using namespace std;
bool Check5K(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    else
    {
        while (n > 1)
        {
            if (n % 5 != 0)
            {
                return 0;
            }
            n /= 5;
        }
        return 1;
    }
}
int FindFirst5K(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (Check5K(a[i]))
        {
            return a[i];
        }
    }
    return 0;
}
int main()
{
    int a[] = {3, 6,12,25,5};
    cout << FindFirst5K(a, 5);
}