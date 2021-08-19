#include <iostream>
using namespace std;
void ListTheValueAppearIn1Array(int a[], int b[], int na, int nb)
{
    int flag;
    for (int i = 0; i < na; i++)
    {
        flag = 1;
        for (int j = 0; j < nb; j++)
        {
            if (a[i] == b[j])
            {
                flag = 0;
                cout << "Gia tri " << a[i] << " trong mang a xuat hien trong mang b" << endl;
                break;
            }
        }
    }
    for (int i = 0; i < nb; i++)
    {
        for (int j = 0; j < na; j++)
        {
            if (b[j] == a[i])
            {
                flag = 0;
                cout << "Gia tri " << a[i] << " trong mang b xuat hien trong mang a" << endl;
                break;
            }
        }
    }
}
int main()
{
    int a[] = {3,2,1};
    int b[] = {3,2};
    ListTheValueAppearIn1Array(a, b , 3, 2);
}