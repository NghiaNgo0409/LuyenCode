#include <iostream>
#include <math.h>
using namespace std;
bool Check(int n)
{
    int num[3];
    int temp = n, i = 0;
    while(temp != 0)
    {
        num[i++] = temp % 10;
        temp /= 10;
    }
    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
        sum += pow(num[i],3);
    }
    if(sum == n)
    {
        return true;
    }    
    else
    {
        return false;
    }
}
int main()
{
    int n = 100;
    while(n <= 999)
    {
        if(Check(n))
        {
            cout << n << " ";
        }
        n++;
    }
}