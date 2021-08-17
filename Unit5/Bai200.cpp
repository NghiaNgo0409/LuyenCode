#include <iostream>
using namespace std;
int SumOfArray(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
int main()
{
    int a[] = {1,2,3,4,5};
    cout << SumOfArray(a, 5);
}