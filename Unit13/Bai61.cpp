#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1,3,4,5,2};
    int max = a[0], pos = 0;
    for(int i = 0; i < 5; i++)
    {
        if(max < a[i])
        {
            a[i] = max;
            pos = i;
        }
    }
    cout << pos;
}