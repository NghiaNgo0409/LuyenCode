#include <iostream>
using namespace std;
struct Circle
{
    int t;
    int r;
};
void Input(Circle& c)
{
    cout << "Nhap tam: ";
    cin >> c.t;
    cout << "Nhap ban kinh: ";
    cin >> c.r;
}
void Output(Circle c)
{
    float s, p;
    p = 2*3.14*c.r;
    s = 3.14*c.r*c.r;
    cout << "Chu vi hinh tron la: " << p << endl;
    cout << "Dien tich hinh tron la: " << s << endl;
}
int main()
{
    Circle c;
    Input(c);
    Output(c);
}
