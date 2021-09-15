#include <iostream>
using namespace std;
int CountAmount(float a[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        if(a[n - 1] >= 0)
        {
            return 1 + CountAmount(a, n - 1);
        }
        else
        {
            CountAmount(a, n - 1);
        }
    }
}
int main()
{
    float a[5] = {3.2 , 4.1, -4.6, -8.1, 0.1};
    cout << CountAmount(a, 5);
}