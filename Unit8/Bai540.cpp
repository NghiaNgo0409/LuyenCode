#include <iostream>
#include <math.h>
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
void Output(Point& p)
{
    cout << "( " << p.x << " ; " << p.y << " )" << endl;
}
float Distance2Point(Point a, Point b)
{
    return sqrt(pow(b.x-a.x,2) + pow(b.y-a.y, 2));
}
int Distance2PointOx(Point a, Point b)
{
    return abs(a.x - b.x);
}
int Distance2PointOy(Point a, Point b)
{
    return abs(a.y - b.y);
}
Point FindDiemDoiXung(Point a)
{
    Point c;
    c.x = -1 * a.x;
    c.y = -1 * a.y;
    return c;
}
Point FindDiemDoiXungOx(Point a)
{
    Point c;
    c.x = a.x;
    c.y = -1 * a.y;
    return c;
}
Point FindDiemDoiXungOy(Point a)
{
    Point c;
    c.x = -1 * a.x;
    c.y = a.y;
    return c;
}
Point FindDiemDoiXungQuaPhanGiac1(Point a)
{
    Point c;
    c.x = 1 * a.y;
    c.y = 1 * a.x;
    return c;
}
Point FindDiemDoiXungQuaPhanGiac2(Point a)
{
    Point c;
    c.x = -1 * a.y;
    c.y = -1 * a.x;
    return c;
}
bool CheckInFirstZone(Point a)
{
    if(a.x > 0 && a.y > 0)
    {
        return true;
    }
    return false;
}
bool CheckInSecondZone(Point a)
{
    if(a.x < 0 && a.y > 0)
    {
        return true;
    }
    return false;
}
bool CheckInThirdZone(Point a)
{
    if(a.x < 0 && a.y < 0)
    {
        return true;
    }
    return false;
}
bool CheckInFourthZone(Point a)
{
    if(a.x > 0 && a.y < 0)
    {
        return true;
    }
    return false;
}
int main()
{
    
}