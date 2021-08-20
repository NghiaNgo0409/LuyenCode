#include <iostream>
using namespace std;
bool IsEvenExistInArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int a[] = {3,1,4,7,9};
    cout << IsEvenExistInArray(a, 5);
}