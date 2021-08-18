#include <iostream>
using namespace std;
int CountNumberDivide7(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 7 == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[] = {1,7,21,9,5,3};
    cout << CountNumberDivide7(a, 6);
}