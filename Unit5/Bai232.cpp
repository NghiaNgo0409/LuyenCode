#include <iostream>
using namespace std;
void ListOverOneValue(int a[], int n)
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
        if (count > 1)
        {
            cout << "Gia tri " << a[i] << " xuat hien qua 1 lan" << endl;
        }
    }
}
int main()
{
    int a[] = {3,2,2,3,1,4,5};
    ListOverOneValue(a, 7);
}