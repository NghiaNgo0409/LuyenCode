#include <iostream>
using namespace std;
bool CheckEx254(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] <= a[j])
            {
                return false;
            }
        }
    }
    return true;
}
int CountEx254(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (CheckEx254(a, n))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[] = {1,2,3,4,5};
    cout << CountEx254(a, 5);
}