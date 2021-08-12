#include <iostream>
using namespace std;
int CountPrimeNumber(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 100 && a[i] > 1)
        {
            int check = 0;
            for (int j = 2; j < a[i]; j++)
            {
                if (a[i] % j == 0)
                {
                    check++;
                }
            }
            if (check == 0)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int a[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    cout << CountPrimeNumber(a, 15);
}