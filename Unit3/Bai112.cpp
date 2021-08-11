#include <iostream>
using namespace std;
void VeHCN(int h, int w)
{
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            cout << " * ";
        }
        cout << endl << endl;
    }
}
void VeHCNRong(int h, int w)
{
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (j == 1  || j == w || i == 1 || i == h)
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
    VeHCNRong(3,4);
}