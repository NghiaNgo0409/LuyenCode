#include <iostream>
using namespace std;
bool CheckFullOdd(int n)
{
    while (n > 0)
    {
        if ((n % 10) % 2 == 0)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
void ListEx190(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (CheckFullOdd(a[i]))
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int a[] = {3,12,44,256,13,7,359};
    ListEx190(a, 7);
}