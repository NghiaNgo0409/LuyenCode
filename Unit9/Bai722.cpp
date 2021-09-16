#include <iostream>
using namespace std;
float Sum(float a[], int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return a[n-1] + Sum(a, n - 1);
    }
}
int main()
{
    float a[5] = {1,2,3,4,5};
    cout << Sum(a, 5);
}