#include <iostream>
using namespace std;
bool CheckArrayWave(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if ((a[i] < a[i + 1] && a[i] > a[i - 1]) || (a[i] > a[i + 1] && a[i] < a[i - 1]) || (a[i] > a[i + 1] && a[i] < a[i - 1]) || (a[i] < a[i + 1] && a[i] > a[i - 1]))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a[] = {3,2,3,4,3};
    cout << CheckArrayWave(a, 5);
}