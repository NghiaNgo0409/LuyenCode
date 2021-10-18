#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int random(int min, int max)
{
    return min + rand() % (max + 1 - min);
}
int main()
{
    srand((int) time(0));
    int r;
    for(int i = 0; i < 10; i++)
    {
        r = random(1,20);
        cout << r << " ";
    }
}