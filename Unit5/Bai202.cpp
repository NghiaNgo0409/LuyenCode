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
    else
    {
        return true;
    }
}
int SumArray(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (CheckFirstOddCharacter(a[i]))
        {
            sum += a[i];
        }
    }
    return sum;
}
int main()
{
    int a[] = {1,4,21,14,16};
    cout << SumArray(a, 5);
}