#include <iostream>
using namespace std;
bool FirstCharacter(int n)
{
    while(n >= 10)
    {
        n /= 10;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    return true;
}
int FindArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (FirstCharacter(a[i]))
        {
            return a[i];
        }
    }
    return -1;
}
int main()
{
    int a[5]= {25,46,31,13,22};
    cout << FindArray(a, 5);
}