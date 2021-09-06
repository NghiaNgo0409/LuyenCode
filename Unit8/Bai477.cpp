#include <iostream>
using namespace std;
struct Point
{
    int x;
    int y;
};
void Input(Point& p)
{
    cout << "Nhap x: ";
    cin >> p.x;
    cout << "Nhap y: ";
    cin >> p.y;
}
void Output(Point p)
{
    cout << "(" << p.x << " ; " << p.y << ")" << endl;
}
int main()
{
    Point p;
    Input(p);
    Output(p);
}