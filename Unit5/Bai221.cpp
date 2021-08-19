#include <iostream>
using namespace std;
int Ex221(int a[], int n)
{
    int countEven = 0, countOdd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }
    if (countEven > countOdd)
    {
        return -1;
    }
    else if (countEven == countOdd)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int a[] = {3,-1,5,-2,4,11,34};
    cout << Ex221(a, 7);
}