#include <iostream>
using namespace std;
void ListRateNumber(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                if (i <= j)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
        }
        if (count != 0)
        {
            cout << "Gia tri " << a[i] << " xuat hien " << count << " lan" << endl;
        }
    }
}
int main()
{
    int a[] = {3,2,4,4,1,5};
    ListRateNumber(a, 6);
}