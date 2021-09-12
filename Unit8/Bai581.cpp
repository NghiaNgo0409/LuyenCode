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
struct Triangle
{
    Point p1;
    Point p2;
    Point p3;
};
void InputTriangle(Triangle& t)
{
    Input(t.p1);
    Input(t.p2);
    Input(t.p3);
}
void Output(Triangle t)
{
    cout << "((" << t.p1.x << ", " << t.p1.y << "); (" << t.p2.x << ", " << t.p2.y << "); (" << t.p3.x << ", " << t.p3.y << "))" << endl;
}
float Distance2Point(Point a, Point b)
{
    return sqrt(pow((b.x - a.x) , 2) + pow((b.y - a.y) , 2));
}
float FindPerimeter(Triangle t)
{
    float a = Distance2Point(t.p1, t.p2);
    float b = Distance2Point(t.p1, t.p3);
    float c = Distance2Point(t.p2, t.p3);
    return a + b + c;
}
float FindSurface(Triangle t)
{
    float a = Distance2Point(t.p1, t.p2);
    float b = Distance2Point(t.p1, t.p3);
    float c = Distance2Point(t.p2, t.p3);
    float p = (a + b + c) / 2;
    float s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}
Point FindCenter(Triangle t)
{
    Point g;
    g.x = (float)(t.p1.x + t.p2.x + t.p3.x) / 3;
    g.y = (float)(t.p1.y + t.p2.y + t.p3.y) / 3;

    return g;
}
Point PointXMax(Triangle t)
{
    if(t.p1.x > t.p2.x && t.p1.x > t.p3.x)
    {
        return t.p1;
    }
    else if (t.p2.x > t.p1.x && t.p2.x > t.p3.x)
    {
        return t.p2;
    }
    else if (t.p3.x > t.p1.x && t.p3.x > t.p2.x)
    {
        return t.p3;
    }
}
Point PointYMin(Triangle t)
{
    if(t.p1.y < t.p2.y && t.p1.y < t.p3.y)
    {
        return t.p1;
    }
    else if (t.p2.y < t.p1.y && t.p2.y < t.p3.y)
    {
        return t.p2;
    }
    else if (t.p3.y < t.p1.y && t.p3.y < t.p2.y)
    {
        return t.p3;
    }
}
float SumDistanceFromPointToPeak(Triangle t, Point p)
{
    float a = Distance2Point(t.p1, p);
    float b = Distance2Point(t.p2, p);
    float c = Distance2Point(t.p3, p);
    return a + b + c;
}
int ChoBietDangTamGiac(Triangle a)
{
    float AB = Distance2Point(a.p1, a.p2);
    float BC = Distance2Point(a.p2, a.p3);
    float AC = Distance2Point(a.p1, a.p3);

    int flag;
    if(AB == BC && AC == BC)
    {
        flag = 1;  // đều
    }
    else 
    {
        if(AB * AB + BC * BC == AC * AC || AC * AC + BC * BC == AB * AB || AB * AB + AC * AC == BC * BC)
        {
            flag = 2;  // vuông
        }
        if(AB == BC || AC == BC || AB == AC)
        {
            flag = 3;   // cân
        }
        else
        {
            flag = 4;   // thường
        }
    }
    return flag;
}
int main()
{

}