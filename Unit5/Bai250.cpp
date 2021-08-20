#include <iostream>
using namespace std;
void Ex250(int a[], int n)
{
    int d = a[1] - a[0];
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i+1] - a[i] == d)
        {
            count++;
        }
    }
    if (count == n - 1)
    {
        cout << "Mang la cap so cong voi cong sai la " << d;
    }
    else
    {
        cout << "Mang khong lap thanh cap so cong";
    }
}
int main()
{
    int a[] = {1,3,5,7,9};
    Ex250(a, 5);
}