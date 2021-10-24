#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <map>
using namespace std;
int FindMax(int a[], int n)
{
    int max = a[0];
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{
    srand((int) time(0));
    int max = 30; int min = 1;
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
    cout << FindMax(a, cnt);
}