#include <iostream> 
using namespace std;
bool CheckSoGanh(int n)
{
    int x = 0;
    int num = n;
    while(num != 0)
    {
        x = x * 10 + num % 10;
        num /= 10;
    }
    if (x == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int FindSoGanh(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (CheckSoGanh(a[i]))
        {
            return a[i];
        }
    }
}
int main()
{
    int a[5] = {10,32,121,13,54};
    cout << FindSoGanh(a, 5);
}