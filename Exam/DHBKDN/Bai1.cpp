#include <iostream>
using namespace std;
int Sum(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n + Sum(n - 1);
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