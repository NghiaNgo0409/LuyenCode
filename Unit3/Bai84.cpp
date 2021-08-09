#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a == 0)
    {
        if (b == 0)
        {
            cout << "Phuong trinh vo so nghiem" << endl;
        }
        else
        {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    }
    else
    {
        cout << double(b)/ a;
    }
}