#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int max = a[0], min = a[0];
    for(int i = 0; i < 5; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    for(int i = 0; i < 5; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    cout << max << " " << min;
}