#include <iostream>
#include <math.h>
using namespace std;
bool isSquare(int n)
{
    int x = sqrt(n);
    if(x * x == n)
    {
        return true;
    }
    return false;
}
int main()
{
    int n; cin >> n;
    cout << isSquare(n) << endl;
    int a[10] = {91, 20, 90, 78, 58, 49, 97, 95, 1, 11};
    for(int i = 0; i < 10; i++)
    {
        if(isSquare(a[i]))
        {
            cout << a[i] << " ";
        }
    }
}