#include <iostream>
#include <string>
using namespace std;
struct Province
{
    short id;
    string name;
    float surface;
};
void Input(Province& pv)
{
    cout << "Nhap ma tinh: ";
    cin >> pv.id;
    cout << "Nhap ten tinh: ";
    getline(cin, pv.name);
    cout << "Nhap dien tich: ";
    cin >> pv.surface;
}
void Output(Province pv)
{
    cout << "Ma tinh: " << pv.id << endl;
    cout << "Ten tinh: " << pv.name << endl;
    cout << "Dien tich: " << pv.surface << " km^2" << endl;
}
int main()
{
    
}