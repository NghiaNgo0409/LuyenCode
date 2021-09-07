#include <iostream>
using namespace std;
struct Line
{
    int a, b, c;
};
void Input(Line& l)
{
    cout << "Nhap a: ";
    cin >> l.a;
    cout << "Nhap b: ";
    cin >> l.b;
    cout << "Nhap c: ";
    cin >> l.c;
}
void Output(Line l)
{
    cout << l.a << "x + " << l.b << "y + " << l.c << endl;
}
int main()
{
    Line l;
    Input(l);
    Output(l);
}
