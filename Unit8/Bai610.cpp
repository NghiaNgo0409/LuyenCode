#include <iostream>
#include <string>
using namespace std;
struct Goods
{
    string name;
    int price;
    int amount;
};
void Input(Goods& gd)
{
    cout << "Nhap ten mat hang: ";
    getline(cin, gd.name);
    cout << "Nhap gia tien: ";
    cin >> gd.price;
    cout << "Nhap so luong ton kho: ";
    cin >> gd.amount;
}
void Output(Goods gd)
{
    cout << "Ten mat hang: " << gd.name << endl;
    cout << "Gia tien: " << gd.price << " VND" << endl;
    cout << "So luong ton kho: " << gd.amount << " cai" << endl;
}
int main()
{
    
}
