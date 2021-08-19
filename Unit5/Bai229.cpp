#include <iostream>
using namespace std;
int CountDifferentValue(int a[], int n)
{
    int count = 0, flag;
    for (int i = 0; i < n; i++)
    {
        flag = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
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
    int a[] = {2,2,1,3,4,4};
    cout << CountDifferentValue(a, 6);
}