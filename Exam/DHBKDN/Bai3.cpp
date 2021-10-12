#include <iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cin >> n;
        if (n < 100 || n > 999)
        {
            cout << "n khong hop le. Moi nhap lai: ";
        }
    } while (n < 100 || n > 999);
    int temp = n, sum = 0;
    while(temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    cout << sum;
}