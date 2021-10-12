#include <iostream>
#include <math.h>
using namespace std;
int Sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return pow(n,2) + Sum(n - 1);
}
int main()
{
    int n;
    do
    {
        cin >> n;
        if(n <= 0)
        {
            cout << "n khong hop le. Vui long nhap lai: ";
        }
    } while (n <= 0);
    cout << Sum(n);
}