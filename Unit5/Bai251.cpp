#include <iostream>
using namespace std;
bool IsAllValueEqual(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] != a[j])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int a[] = {1,1,2,1,1};
    cout << IsAllValueEqual(a, 5);
}