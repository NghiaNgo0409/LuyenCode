#include <iostream>
#include <math.h>
#include <time.h>
#include <map>
#include <stdlib.h>
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
int FindFirstPrime(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(isPrime(a[i]))
        {
            return a[i];
        }
    }
    return -1;
}
int FindMaxPrime(int a[], int n)
{
    int max = FindFirstPrime(a, n);
    for(int i = 0; i < n; i++)
    {
        if(isPrime(a[i]) && a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{
    int max = 30, min = 1;
    int cnt;
    int* a = new int[cnt];
    do
    {
        cin >> cnt;
    } while (cnt > (max - min + 1));

    srand((int) time(0));
    map<int, bool> vis;
    for(int i = 0; i < cnt; i++)
    {
        do
        {
            a[i] = min + rand() % (max - min + 1);
        } while (vis.find(a[i]) != vis.end());
        cout << a[i] << " ";
        vis[a[i]] = true;
    }
    cout << endl;
    cout << FindMaxPrime(a, cnt);
}