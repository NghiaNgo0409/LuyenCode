#include <iostream>
#include <iomanip>
using namespace std;
const float PI = 3.14;
int main()
{
    float r; cin >> r;
    cout << fixed << setprecision(3) << 2*r*PI << " " << r * r * PI;
}