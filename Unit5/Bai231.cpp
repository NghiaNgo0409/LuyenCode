#include <iostream>
using namespace std;
void ListOneTimeValue(int a[], int n)
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
        if (count == 1)
        {
            cout << "Gia tri " << a[i] << " xuat hien dung 1 lan" << endl;
        }
    }
}
int main()
{
    int a[] = {3,1,-4,2,5,2};
    ListOneTimeValue(a, 6);
}