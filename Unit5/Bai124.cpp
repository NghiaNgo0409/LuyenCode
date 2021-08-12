#include <iostream>
using namespace std;
bool CheckEx124(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] < 2004)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int a[5] = {1,3,5,7,2004};
    cout << CheckEx124(a, 5);
}