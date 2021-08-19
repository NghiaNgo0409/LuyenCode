#include <iostream> 
using namespace std;
bool CheckPerfect(int n)
{
    int sum = 0;
    for(int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int CountPerfectNum(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (CheckPerfect(a[i]))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[] = {6,28,3,4,11};
    cout << CountPerfectNum(a, 5);
}