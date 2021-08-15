#include <iostream>
#include <math.h>
using namespace std;
void CountNumbers(int a[], int n, int b[])
{
    for (int i = 0; i < n; i++)
    {
        int x = abs(a[i]);
        while(x != 0)
        {
            int c = x % 10;
            x /= 10;

            b[c]++;
        }
    }
}
int FindNumCharacterMin(int a[], int n, int b[])
{
    int min = abs(a[0] % 10);
    for (int i = 0; i < 10; i++)
    {
        if (b[i] != 0)
        {
            min = (b[min] < b[i]) ? min : i;
        }
    }
    return min;
}
int main()
{
    int b[10];
    int a[3] = {12,34,16};
    CountNumbers(a,3,b);
    cout << FindNumCharacterMin(a, 3, b);
}
