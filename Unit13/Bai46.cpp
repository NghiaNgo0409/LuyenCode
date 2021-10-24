#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <map>
using namespace std;
bool isFullOdd(int n)
{
    while(n > 0)
    {
        int temp = n % 10;
        if(temp % 2 == 0)
        {
            return false;
        }
        n /= 10;
    }
    return true;
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
    int* a = new int[cnt];
    map<int, bool> vis;
    for(int i = 0; i < cnt; i++)
    {
        do
        {
            a[i] = rand() % (max + min - 1);
        } while (vis.find(a[i]) != vis.end());
        cout << a[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < cnt; i++)
    {
        if(isFullOdd(a[i]))
        {
            cout << a[i] << " ";
        }
    }
}