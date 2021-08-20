#include <iostream>
using namespace std;
bool IsArrayHas0Value(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int a[] = {1,3,2,6,1};
    cout << IsArrayHas0Value(a, 5);
}