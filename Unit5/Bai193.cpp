#include <iostream>
using namespace std;
bool Check3K(int n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        while(n > 1)
        {
            if (n % 3 != 0)
            {
                return false;
            }
            n /= 3;
        }
        return true;
    }
}
void List3K(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (Check3K(a[i]))
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int a[] = {3,12,4,9,27,8};
    List3K(a, 6);
}