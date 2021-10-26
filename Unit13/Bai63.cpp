#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int max = a[0];
    for(int i = 0; i < 5; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    int max2 = a[0];
    for(int i = 0; i < 5; i++)
    {
        if(a[i] > max2 && a[i] < max)
        {
            max2 = a[i];
        }
    }
    cout << max2;
}