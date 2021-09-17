#include <iostream>
using namespace std;
void Arrange(int a[], int n)
{
    if (n == 1)
    {
        return;
    }
    for(int i = 0; i <= n - 2; i++)
    {
        if(a[i] > a[n - 1])
        {
            int temp = a[i];
            a[i] = a[n-1];
            a[n-1] = temp;
        }
    }
    Arrange(a, n-1);
}
int main()
{
    int a[5] = {5,4,3,2,1};
    Arrange(a, 5);
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
}