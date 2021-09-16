#include <iostream>
using namespace std;
int CountDifferent(int a[], int n)
{
    if(n < 1)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    int flag = 1;
    for(int i = 0; (i <= n - 2 && flag == 1); i++)
    {
        if(a[i] == a[n - 1])
        {
            flag = 0;
        }
    }
    return flag + CountDifferent(a, n-1);
}
int main()
{
    int a[5] = {1,2,3,4,4};
    cout << CountDifferent(a, 5);
}