#include <iostream>
#include <math.h>
#include <map>
#include <stdlib.h>
#include <time.h>
using namespace std;
bool isPrime(int n)
{
    if(n < 2)
    {
        return false;
    }
    else 
    {
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
int Count(int a[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(isPrime(a[i]) && a[i] < 100)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    srand((int) time(0));
    int cnt;
    int max = 30, min = 1;
    do
    {
        cin >> cnt;
    } while (cnt > (max + min - 1));
    int* a = new int[cnt];
    map<int , bool> vis;
    for(int i = 0; i < cnt; i++)
    {
        do
        {       
            a[i] = min + rand() % (max + min - 1);
        } while (vis.find(a[i]) != vis.end());
        cout << a[i] << " ";
    }
    cout << endl;
    cout << Count(a, cnt);
}
