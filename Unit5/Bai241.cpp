#include <iostream>
using namespace std;
bool IsArrayHas0Consecutive(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0 && (a[i] == a[i-1] || a[i] == a[i+1]))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int a[] = {3,0,0,6,4};
    cout << IsArrayHas0Consecutive(a, 5);
}