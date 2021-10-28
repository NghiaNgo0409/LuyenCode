#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int a, b; cin >> a >> b;
    if(n % a == 0 && n % b == 0)
    {
        cout << "Co, tat ca!" << endl;
    }
    else if (n % a == 0 && n % b != 0)
    {
        cout << "Chi chia het cho " << a << "," << endl;
    }
    else if (n % a != 0 && n % b == 0)
    {
        cout << "Chi chia het cho " << b << "." << endl;
    }
    else if(n % a != 0 && n % b != 0)
    {
        cout << "Khong chia het cho so nao ca." << endl;
    }
}