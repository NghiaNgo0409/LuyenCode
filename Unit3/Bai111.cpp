#include <iostream>
#include <math.h>
using namespace std;
void VeTamGiacCan(int h)
{
    for (int i = 1; i <= h; i++)
    {
        for (int j = i; j < h; j++)
        {
            cout << "   ";
        }

        for (int j = 1; j <= (2*i - 1); j++)
        {
            cout << " * ";
        }

        cout << endl << endl;
    }
}
void VeTamGiacCanRong(int h)
{
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j < 2*h; j++)
        {
            if (abs(h - j) == i - 1 || i == h)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl << endl;
    }
}
void VeTamGiacVuong(int h)
{
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl << endl;
    }
}
void VeTamGiacVuongRong(int h)
{
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == h)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl << endl;
    }
}
int main()
{
    VeTamGiacVuongRong(5);
}