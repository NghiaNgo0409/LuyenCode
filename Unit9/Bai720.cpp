#include <iostream>
using namespace std;
int Count(int a[], int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        if(a[n - 1] > 0)
        {
            return 1 + Count(a, n-1);
        }
        return Count(a, n-1);
    }
}
int main()
{
    int a[5] = {1,2,3,-4,5};
    cout << Count(a, 5);
}