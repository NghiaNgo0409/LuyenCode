#include <iostream>
using namespace std;
bool CheckFinal5(int n)
{
    if (n % 10 == 5)
    {
        return true;
    }
    return false;
}
int CountFinal5(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (CheckFinal5(a[i]))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[] = {15,125,13,53,25};
    cout << CountFinal5(a, 5);
}