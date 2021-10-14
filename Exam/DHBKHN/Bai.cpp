#include <iostream>
#include <string>
using namespace std;
struct CB
{
    string name;
    float salary;
};
template <typename T> T Swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}
int MinSalary(CB list[], int n)
{
    int min = list[0].salary;
    for(int i = 0; i < n; i++)
    {
        if(list[i].salary < min)
        {
            min = list[i].salary;
        }
    }
    return min;
}
int main()
{
    int n = 15;
    CB list[15];
    for(int i = 0; i < n; i++)
    {
        float t;
        cout << "Nhap thong tin can bo thu " << i + 1 << endl;
        cout << "Nhap ten: "; getline(cin, list[i].name); fflush(stdin);
        cout << "Nhap so tien luong: "; cin >> t; t = list[i].salary; fflush(stdin);
    }
    int minSalary = MinSalary(list, n);
    cout << "Danh sach nhung can bo co luong thap nhat phong: " << endl;
    for(int i = 0; i < n; i++)
    {
        if(list[i].salary == minSalary)
        {
            cout << list[i].name << endl;
        }
    }
}
