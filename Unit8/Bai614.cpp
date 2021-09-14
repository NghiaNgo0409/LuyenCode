#include <iostream>
#include <string>
using namespace std;
struct Employee
{
    string id;
    string name;
    float salary;
};
void Input(Employee& epl)
{
    cout << "Nhap ID: ";
    getline(cin, epl.id);
    cout << "Nhap ten nhan vien: ";
    getline(cin, epl.name);
    cout << "Nhap so tien luong: ";
    cin >> epl.salary;
}
void Output(Employee epl)
{
    cout << "ID cua nhan vien la: " << epl.id << endl;
    cout << "Ten cua nhan vien la: " << epl.name << endl;
    cout << "Tien luong cua nhan vien la: " << epl.salary << endl;
}
int main()
{
    
}
