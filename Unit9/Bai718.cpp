#include <iostream>
using namespace std;
void Output(int a[], int n)
{
    if(n == 0)
    {
        return;
    }
    else
    {
        Output(a, n - 1);
        cout << a[n - 1] << " ";
    }
}
int main()
{
    int a[5] = {1,2,3,4,5};
    Output(a, 5);
}
