#include <iostream>
#include <math.h>
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
    cout << "( " << p.x << "; " << p.y << "; " << p.z << endl; 
}
float Distance2Point(Point a, Point b)
{
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2) + pow(b.z - a.z, 2));
}
int Distance2PointOx(Point a, Point b)
{
    return abs(a.x - b.x);
}
int Distance2PointOy(Point a, Point b)
{
    return abs(a.y - b.y);
}
int Distance2PointOz(Point a, Point b)
{
    return abs(a.z - b.z);
}
Point FindDiemDoiXung(Point a)
{
    Point c;
    c.x = -1 * a.x;
    c.y = -1 * a.y;
    c.z = -1 * a.z;
    return c;
}
Point FindDiemDoiXungOxy(Point a)
{
    Point c;
    c.x = a.x;
    c.y = a.y;
    c.z = -1 * a.z;
    return c;
}
Point FindDiemDoiXungOxz(Point a)
{
    Point c;
    c.x = a.x;
    c.y = -1 * a.y;
    c.z = a.z;
    return c;
}
Point FindDiemDoiXungOyz(Point a)
{
    Point c;
    c.x = -1 * a.x;
    c.y = a.y;
    c.z = a.z;
    return c;
}
int main()
{
    
}
