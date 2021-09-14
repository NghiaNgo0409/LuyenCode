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
void Input(Student& stu)
{
    cout << "Nhap ten hoc sinh: ";
    getline(cin, stu.name);
    cout << "Nhap diem toan: ";
    cin >> stu.math;
    cout << "Nhap diem van: ";
    cin >> stu.literature;
    stu.avg = ((float)stu.math + stu.literature)/2;
}
void Output(Student stu)
{
    cout << "Ten hoc sinh la: " << stu.name << endl;
    cout << "Diem toan cua hoc sinh la: " << stu.math << endl;
    cout << "Diem van cua hoc sinh la: " << stu.literature << endl;
    cout << "Diem trung binh cua hoc sinh la: " << stu.avg << endl;
}
int main()
{
    
}
