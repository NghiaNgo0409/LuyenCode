#include <iostream>
using namespace std;
bool CheckAInB(int a[], int b[], int na, int nb)
{
    for(int i = 0; i < na; i++)
    {
        int count = 0;
        for(int j = 0; j < nb; j++)
        {
            if (a[i] == b[j])
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a[] = {1,2,3};
    int b[] = {4,3,2,1};
    cout << CheckAInB(a, b, 3, 4);
}