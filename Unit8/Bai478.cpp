#include <iostream>
using namespace std;
struct Point
{
    int x;
    int y;
    int z;
};
void Input(Point& p)
{
    cout << "Nhap x: ";
    cin >> p.x;
    cout << "Nhap y: ";
    cin >> p.y;
    cout << "Nhap z: ";
    cin >> p.z;
}
void Output(Point p)
{
    cout << "(" << p.x << " ; " << p.y << " ; " << p.z << ")" << endl;
}
int main()
{
    Point p;
    Input(p);
    Output(p);  
}