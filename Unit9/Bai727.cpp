#include <iostream>
using namespace std;
int FindMaxIndex(int a[], int n)
{
    if(n == 1)
    {
        return 0;
    }
    else
    {
        int index = FindMaxIndex(a, n - 1);
        if(a[n-1] > a[index])
        {
            index = n - 1;
        }
        return index;
    }
}
int main()
{
    int a[5] = {1,2,3,4,5};
    cout << FindMaxIndex(a, 5);
}