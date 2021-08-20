#include <iostream>
using namespace std;
bool IsFullEvenArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a[] = {2,4,6,8,10};
    cout << IsFullEvenArray(a, 5);
}