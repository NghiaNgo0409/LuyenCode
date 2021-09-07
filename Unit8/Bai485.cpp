#include <iostream>
#include <math.h>
using namespace std;
struct Point
{
    int x;
    int y;
};
void InputPoint(Point& p)
{
    cout << "Nhap x: ";
    cin >> p.x;
    cout << "Nhap y: ";
    cin >> p.y;
}
float FindDistance(Point p, Point q)
{
    return sqrt(pow((p.x-q.x), 2) + pow((p.y-q.y), 2));
}
struct Triangle
{
    Point p1;
    Point p2;
    Point p3;
};
void InputTriangle(Triangle& t)
{
    cout << "Nhap dinh 1: ";
    InputPoint(t.p1);
    cout << "Nhap dinh 2: ";
    InputPoint(t.p2);
    cout << "Nhap dinh 3: ";
    InputPoint(t.p3);
}
float FindSurface(Triangle t)
{
    float a = FindDistance(t.p1, t.p2);
    float b = FindDistance(t.p1, t.p3);
    float c = FindDistance(t.p2, t.p3);
    float p = (a + b + c) / 2;
    float s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}
float FindPerimeter(Triangle t)
{
    float a = FindDistance(t.p1, t.p2);
    float b = FindDistance(t.p1, t.p3);
    float c = FindDistance(t.p2, t.p3);
    return a + b + c;
}
Point FindCenter(Triangle t)
{
    Point g;
    g.x = (float)(t.p1.x + t.p2.x + t.p3.x) / 3;
    g.y = (float)(t.p1.y + t.p2.y + t.p3.y) / 3;

    return g;
}
int main()
{
    Point g;
    Triangle t;
    InputTriangle(t);
    cout << "Chu vi tam giac: " << FindPerimeter(t) << endl;
    cout << "Dien tich tam giac: " << FindSurface(t) << endl;

    cout << "Toa do trong tam G cua tam giac la: (" << g.x << " ; " << g.y << ")" <<endl; 
}

