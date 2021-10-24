#include <iostream>
using namespace std;
bool isFirstCharacterOdd(int n)
{
    int temp;
    while(n > 0)
    {
        temp = n % 10;
        n /= 10;
    }
    if(temp % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int FindFirstIndexContainsFirstCharacterOdd(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(isFirstCharacterOdd(a[i]))
        {
            return a[i];
        }
    }
}
int main()
{
    int a[5] = {23,49,12,52,3};
    cout << FindFirstIndexContainsFirstCharacterOdd(a, 5);
}