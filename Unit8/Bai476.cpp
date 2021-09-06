#include <iostream>
using namespace std;
struct HonSo
{
    int tu;
    int mau;
    int nguyen;
};
void Input(HonSo& hs)
{
    cout << "Nhap nguyen: ";
    cin >> hs.nguyen;
    cout << "Nhap tu so: ";
    cin >> hs.tu;
    do
    {
        cout << "Nhap mau so: ";
        cin >> hs.mau;
        if(hs.mau == 0)
        {
            cout << "Mau so phai khac 0. Vui long nhap lai: ";
        }
    } while (hs.mau == 0);    
}
void Output(HonSo hs)
{
    cout << hs.nguyen << "(" << hs.tu << "/" << hs.mau << ")" << endl;
}
int main()
{
    HonSo hs;
    Input(hs);
    Output(hs);
}
