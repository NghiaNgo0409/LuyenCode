#include <iostream>
#include <math.h>
using namespace std;
double TBDistanceInArray(int a[], int n)
{
    int sumDis = 0;
    int count = 0;
    for (int i = 0; i < n-1; i++)
    {
        sumDis += abs((a[i + 1] - a[i]));
        count++;
    }
    return (double)sumDis/count;
}
int main()
{
    int a[] = {-3,5,7,1,-4};
    cout << TBDistanceInArray(a, 5);
}