#include <iostream>
#include <math.h>
using namespace std;
int index[10] = {0};
int func(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int temp = abs(a[i]);
        do
        {
            int b = temp % 10;
            index[b]++;
            temp /= 10;
        } while (temp != 0);
    }
    int min = 1000, pos = 0;
    for(int i = 0; i < 10; i++)
    {
        if(index[i] > 0)
        {
            if(index[i] < min)
            {
                min = index[i];
                pos = i;
            }
        }
    }
    return pos;
}
int main()
{
    int a[5] = {1, 12, 13, 23, 51};
    cout << "Chu so xuat hien it nhat trong mang la: " << func(a, 5);
}