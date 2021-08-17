#include <iostream>
using namespace std;
bool CheckFirstOddCharacter(int n)
{
    while(n >= 10)
    {
        n /= 10;
    }
    if (n % 2 == 0)
    {
        return false;
    }
}
void ListEx197(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (CheckFirstOddCharacter(a[i]))
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int a[] = {2,13,45,52,7};
    ListEx197(a, 5);
}