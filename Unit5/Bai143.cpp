#include <iostream> 
using namespace std;
int FindFirstEvenValue(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            return a[i];
        }
    }
    return -1;
}
int main()
{
    int a[5] = {1,3,5,7,9};
    cout << FindFirstEvenValue(a, 5);
}