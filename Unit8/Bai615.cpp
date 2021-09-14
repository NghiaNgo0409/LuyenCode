#include <iostream>
#include <string>
using namespace std;
struct Examinee
{
    string id;
    string name;
    float math;
    float physics;
    float chemistry;
    float total;
};
void Input(Examinee& ex)
{
    cout << "Nhap ID: ";
    getline(cin, ex.id);
    cout << "Nhap ten thi sinh: ";
    getline(cin, ex.name);
    cout << "Nhap diem toan: ";
    cin >> ex.math;
    cout << "Nhap diem ly: ";
    cin >> ex.physics;
    cout << "Nhap diem hoa: ";
    cin >> ex.chemistry;
    ex.total = ex.math + ex.physics+ ex.chemistry;
}
void Output(Examinee ex)
{
    cout << "ID thi sinh la: " << ex.id << endl;
    cout << "Ten thi sinh la: " << ex.name << endl;
    cout << "Diem toan thi sinh la: " << ex.math << endl;
    cout << "Diem ly thi sinh la: " << ex.physics << endl;
    cout << "Diem hoa thi sinh la: " << ex.chemistry << endl;
    cout << "Tong diem cua thi sinh la: " << ex.total << endl; 
}
int main()
{
    
}

