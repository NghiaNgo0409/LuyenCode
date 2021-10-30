#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1, count = 0;
    while(i <= n)
    {
        if(n % i == 0)
        {
            count++;
        }
        i++;
    }
    cout << count;
}