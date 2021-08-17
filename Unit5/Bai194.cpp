#include <iostream>
#include <math.h>
using namespace std;
void ListEx194(int a[], int n)
{
    int distance = abs(a[0] - a[1]);
    for (int i = 0; i < n; i++)
    {
        if (abs(a[i] - a[i + 1]) < distance)
        {
            distance = abs(a[i] - a[i + 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (abs(a[i] - a[i + 1]) == distance)
        {
            cout << "( " << a[i] << "  " << a[i + 1] << " )" << endl;
        }
    } 
}
int main()
{
    int a[] = {1,3,6,-4,7,2};
    ListEx194(a, 6);
}