#include <iostream>
using namespace std;
bool CheckFirstEvenCharacter(int n)
{
    while(n >= 10)
    {
        n /= 10;
    }
    if (n % 2 == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
void ListEx192(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (CheckFirstEvenCharacter(a[i]))
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int a[] = {11,32,88,124,245};
    ListEx192(a, 5);
}