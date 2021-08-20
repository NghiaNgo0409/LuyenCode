#include <iostream>
using namespace std;
bool Ex247(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((a[i] + a[i + 1]) % 2 == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a[] = {1,2,3,4,5};
    cout << Ex247(a, 5);
}