#include <iostream>
using namespace std;
bool CheckFirstCharacterOdd(int n)
{
    while(n >= 10)
    {
        n /= 10;
    }
    if (n % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void ListEx189(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (CheckFirstCharacterOdd(a[i]))
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int a[] = {13,22,-39,88,75,129,325,222};
    ListEx189(a,8);
}