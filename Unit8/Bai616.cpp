#include <iostream>
#include <string>
using namespace std;
struct Dissertation
{
    string id;
    string nameDis;
    string nameStu;
    string nameLec;
    int year;
};
void Input(Dissertation& dis)
{
    cout << "Nhap ID: ";
    getline(cin, dis.id);
    cout << "Nhap ten luan van: ";
    getline(cin, dis.nameDis);
    cout << "Nhap ten sinh vien thuc hien: ";
    getline(cin, dis.nameStu);
    cout << "Nhap ten giang vien huong dan: ";
    getline(cin, dis.nameLec);
    cout << "Nhap nam thuc hien: ";
    cin >> dis.year; 
}
void Output(Dissertation dis)
{
    cout << "ID cua luan van la: " << dis.id << endl;
    cout << "Ten cua luan van la: " << dis.nameDis << endl;
    cout << "Ten sinh vien thuc hien: " << dis.nameStu << endl;
    cout << "Ten giang vien huong dan: " << dis.nameLec << endl;
    cout << "Nam thuc hien: " << dis.year << endl;
}
int main()
{
    
}
