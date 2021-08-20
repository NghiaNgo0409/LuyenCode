#include <iostream>
using namespace std;
bool IsIncreasingArray(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a[] = {1,2,3,4,5};
    cout << IsIncreasingArray(a, 5);
}