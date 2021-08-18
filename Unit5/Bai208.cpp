#include <iostream>
#include <math.h>
using namespace std;
bool CheckSquareNumber(int n)
{
    int x = sqrt(n);
    if (x * x == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int SumSquareNumber(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (CheckSquareNumber(a[i]))
        {
            sum += a[i];
        }
    }
    return sum;
}
int main()
{
    int a[] = {-1,3,9,4,25};
    cout << SumSquareNumber(a, 5);
}