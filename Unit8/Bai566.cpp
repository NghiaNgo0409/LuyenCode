#include <iostream>
#include <math.h>
using namespace std;
struct Point
{
    int x;
    int y;
};
struct Circle
{
    Point I;
    int r;
};
void Input(Point& p)
{
    cout << "Nhap x: ";
    cin >> p.x;
    cout << "Nhap y: ";
    cin >> p.y;
}
void InputCircle(Circle& c)
{
    cout << "Nhap toa do tam: ";
    Input(c.I);
    cout << "Nhap ban kinh: ";
    cin >> c.r;
}
float Perimeter(Circle c)
{
    return 2 * 3.14 * c.r;
}
float Surface(Circle c)
{
    return 3.14 * c.r * c.r;
}
float Distance2Point(Point a, Point b)
{
    return sqrt(pow(b.x-a.x,2) + pow(b.y-a.y, 2));
} 
int XetViTriTuongDoiGiua2DuongTron(Circle a, Circle b)
{
    int flag;
    float rMax = (a.r > b.r) ? a.r : b.r;
    float rMin = (a.r < b.r) ? a.r : b.r;
    float distance2Center = Distance2Point(a.I, b.I);

    if(distance2Center > (rMax + rMin) || distance2Center < (rMax + rMin) || distance2Center == 0)
    {
        flag = 1;
    }
    else if (distance2Center == (rMin + rMax) || distance2Center == (rMax - rMin))
    {
        flag = 2;
    }
    else if((rMax - rMin) < distance2Center && distance2Center < (rMax + rMin))
    {
        flag = 3;
    }
    return flag;
}
bool CheckPointInCircle(Circle c, Point p)
{
    float distancePointToCenter = Distance2Point(c.I, p);
    if(distancePointToCenter < c.r)
    {
        return true;
    }
    return false;
}
int main()
{
    
}