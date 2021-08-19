#include <iostream>
using namespace std;
int CountNearDifferentMarks(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (i == n - 2 && a[i] * a[i+1] < 0)
        {
            count++;
        }
        else if (a[i] * a[i + 1] < 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[] = {3,-4,1,2,-5,7};
    cout << CountNearDifferentMarks(a, 6);
}