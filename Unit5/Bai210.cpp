#include <iostream>
using namespace std;
bool CheckFirstEvenCharacter(int n)
{
    while (n >= 10)
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
int SumFirstEvenCharacter(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (CheckFirstEvenCharacter(a[i]))
        {
            sum += a[i];
        }
    }
    return sum;
}
int main()
{
    int a[] = {1,3,4,-12,23};
    cout << SumFirstEvenCharacter(a, 5);
}