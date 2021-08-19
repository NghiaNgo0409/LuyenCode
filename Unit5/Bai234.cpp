#include <iostream>
using namespace std;
int CountTheValueAppearIn1Array(int a[], int b[], int na, int nb)
{
    int flag, count = 0;
    for (int i = 0; i < na; i++)
    {
        flag = 1;
        for (int j = 0; j < nb; j++)
        {
            if (a[i] == b[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            count++;
        }
    }
    for (int i = 0; i < nb; i++)
    {
        flag = 1;
        for (int j = 0; j < na; j++)
        {
            if (b[j] == a[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[] = {3,2,1};
    int b[] = {3,2};
    cout << CountTheValueAppearIn1Array(a, b, 3, 2);
}