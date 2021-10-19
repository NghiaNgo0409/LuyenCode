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
int main()
{
    srand((int) time(0));
    int max = 30, min = 1;
    int cnt;
    do
    {
        cin >> cnt;
    } while (cnt > max + min - 1);
    map<int, bool> vis;
    int* a = new int[cnt];
    for(int i = 0; i < cnt; i++)
    {
        do
        {
            a[i] = min + rand() % (max + min - 1);
        } while (vis.find(a[i]) != vis.end());
        cout << a[i] << " ";
        vis[a[i]] = true;
    }
    cout << endl;
    int count = 0;
    for(int i = 0; i < cnt; i++)
    {
        if(isPrime(a[i]))
        {
            count++;
        }
    }    
    cout << count;
}