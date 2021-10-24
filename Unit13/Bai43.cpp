#include <iostream>
using namespace std;
bool isIncreasing(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int a[5] = {1,2,3,4,5};
    cout << isIncreasing(a, 5);
}