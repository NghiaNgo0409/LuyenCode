#include <iostream>
using namespace std;
int FirstPosOfEvenValue(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[5] = {1,7,3,9,5};
    cout << FirstPosOfEvenValue(a ,5);
}