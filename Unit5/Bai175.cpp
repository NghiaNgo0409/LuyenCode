#include <iostream>
#include <math.h>
using namespace std;
void FindDistance(int a[] , int n)
{
    int distance = abs(a[0] - a[1]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(a[i] - a[j]) <= distance)
            {
                distance = abs(a[i] - a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(a[i] - a[j]) == distance)
            {
                cout << "Cap ( " << a[i] << "  " << a[j] << " ) co gia tri khoang cach gan nhau nhat" << endl;
            }
        }
    }
}
int main()
{
    int a[] = {1,3,4,8,2};
    FindDistance(a, 5);
}