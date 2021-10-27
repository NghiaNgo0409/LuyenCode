#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x; cin >> x;
    if(x>0)
    {
        cout << (int) x << " " << (int) (x+1); 
    }
    else
    {
        cout << (int)(x - 1) << " " <<(int)x;
    }
}