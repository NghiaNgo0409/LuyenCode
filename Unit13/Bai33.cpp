#include <iostream>
using namespace std;
int UCLN(int a, int b)
{
    if(a == b) return a;
    if(a > b)
    {
        UCLN(a-b,b);
    }
    else if(a < b)
    {
        UCLN(a, b-a);
    }
}
int BCNN(int a, int b)
{
    return (a*b)/UCLN(a,b);
}
int BCNNofArray(int a[], int n)
{
    int temp = BCNN(a[0], a[1]);
    for(int i = 2; i < n; i++)
    {
        temp = BCNN(temp,a[i]);
    }
    return temp;
}
int main()
{
    int a[5] = {1,2,3,4,5};
    cout << BCNNofArray(a, 5) << endl;
}