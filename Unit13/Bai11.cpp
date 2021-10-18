#include <iostream>
#include <time.h>
#include<stdlib.h>
#include <map>
using namespace std;
int random(int min, int max)
{
    return min + rand() % (max + 1 - min);
}
int main()
{
    int cnt, r;
    int max = 20, min = 1;
    do
    {
        cin >> cnt;
    } while (cnt > (max + 1 - min));
    
    map<int, bool> vis;
    for(int i = 0; i < cnt; i++)
    {
        do
        {
            r = random(min, max);
        } while (vis.find(r) != vis.end());
        cout << r << " ";
        vis[r] = true;
    }
}