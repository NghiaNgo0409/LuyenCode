#include <iostream>
#include <string>
using namespace std;
struct Student
{
    string name;
    int math;
    int literature;
    float avg;
};
void InputStudent(Student& stu)
{
    cout << "Nhap ten hoc sinh: ";
    getline(cin, stu.name);
    cout << "Nhap diem toan: ";
    cin >> stu.math;
    cout << "Nhap diem van: ";
    cin >> stu.literature;
    stu.avg = ((float)stu.math + stu.literature)/2;
}
void OutputStudent(Student stu)
{
    cout << "Ten hoc sinh la: " << stu.name << endl;
    cout << "Diem toan cua hoc sinh la: " << stu.math << endl;
    cout << "Diem van cua hoc sinh la: " << stu.literature << endl;
    cout << "Diem trung binh cua hoc sinh la: " << stu.avg << endl;
}
struct Classroom
{
    string name;
    int amount;
    Student stu[50];
};
void Input(Classroom& cr)
{
    cout << "Nhap ten lop: ";
    getline(cin, cr.name);
    cout << "Nhap so luong hoc sinh: ";
    cin >> cr.amount;
    for(int i = 0; i < cr.amount; i++)
    {
        cout << "Nhap thong tin hoc sinh thu " << i + 1 << " : " << endl;
        InputStudent(cr.stu[i]);
    }
}
void Output(Classroom cr)
{
    cout << "Ten lop la: " << cr.name << endl;
    cout << "So luong hoc sinh la: " << cr.amount << endl;
    for(int i = 0; i < cr.amount; i++)
    {
        cout << "Thong tin hoc sinh thu " << i + 1 << " : " << endl;
        OutputStudent(cr.stu[i]);
    }
}
int main()
{
    
}