#include <iostream>
#include <math.h>
using namespace std;
struct Point
{
    int x;
    int y;
    int z;
};
void InputPoint(Point& p)
{
    cout << "Nhap x: ";
    cin >> p.x;
    cout << "Nhap y: ";
    cin >> p.y;
    cout << "Nhap z: ";
    cin >> p.z;
}
struct Sphere
{
    Point I;
    int r;   
};
void InputSphere(Sphere& sp)
{
    InputPoint(sp.I);
    cout << "Nhap ban kinh: ";
    cin >> sp.r;
}
void Output(Sphere sp)
{
    cout << "((" << sp.I.x << ", " << sp.I.y << ", " << sp.I.z << "), " << sp.r << ")" << endl;
}
float SurfaceSphere(Sphere sp)
{
    return 4 * 3.14 * sp.r * sp.r;
}
float VolumeSphere(Sphere sp)
{
    return 4/3 * 3.14 * sp.r * sp.r * sp.r;
}
float Distance2Point(Point a, Point b)
{
    return sqrt(pow((b.x - a.x) , 2) + pow((b.y - a.y) , 2) + pow((b.z - a.z) , 2));
}
int XetViTri2Sphere(Sphere a, Sphere b)
{
    int flag;
    float rMax = (a.r > b.r) ? a.r : b.r;
    float rMin = (a.r < b.r) ? a.r : b.r;
    
    float distance2Center = Distance2Point(a.I, b.I);

    if(distance2Center > rMax + rMin || distance2Center < rMax - rMin || distance2Center == 0)
    {
        flag = 1;
    }
    else if (distance2Center == rMax + rMin || distance2Center == rMax - rMin)
    {
        flag = 2;
    }
    else if (rMax - rMin < distance2Center && distance2Center < rMax + rMin)
    {
        flag = 3;
    }
    return flag;
}
bool CheckPointInSphere(Sphere sp, Point a)
{
    int distance = Distance2Point(a, sp.I);
    if(distance < sp.r)
    {
        return true;
    }
    return false;
}
int main()
{
    
}
