#include <iostream>
using namespace std;
struct Circle
{
    int x;
    int y;
    int r;
};
void Input(Circle& c)
{
    cout << "Nhap x: ";
    cin >> c.x;
    cout << "Nhap y: ";
    cin >> c.y;
    cout << "Nhap ban kinh: ";
    cin >> c.r;
}
void Output(Circle c)
{
    cout << "((  " << c.x << ",  " << c.y << "),  " << c.r << ")" << endl;
}
int main()
{
    Circle c;
    Input(c);
    Output(c);
}
