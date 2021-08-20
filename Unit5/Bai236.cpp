#include <iostream>
using namespace std;
int CountAInB(int a[], int b[], int na, int nb)
{
    int start, flag, count = 0;
    for (int i = 0; i < nb; i++)
    {
        if (a[0] == b[i] && nb - i >= na)
        {
            start = i;
            flag = 1;
            for (int j = 0; j < na; j++)
            {
                if (a[j] != b[start++])
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
    }
    return count;
}
int main()
{
    int a[] = {1,2,3};
    int b[] = {4,3,1,2};
    cout << CountAInB(a, b, 3, 4);
}