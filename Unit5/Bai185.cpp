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
    return false;
}
void ListSquareNumber(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (CheckSquareNumber(a[i]))
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int a[] = {2,4,9,6,12,-5,-7};
    ListSquareNumber(a, 7);
}