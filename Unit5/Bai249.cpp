#include <iostream>
using namespace std;
bool IsDecreasingArray(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a[] = {5,4,3,2,1};
    cout << IsDecreasingArray(a, 5);
}