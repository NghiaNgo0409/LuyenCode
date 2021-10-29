#include <iostream>
using namespace std;
int main()
{
    int c[10] = {0};
    int n; cin >> n;
    while(n--)
    {
        int a;
        cin >> a;
        c[a]++;
    }
    for(int i = 0; i < 10; i++)
    {
        if(c[i] > 0)
        {
            if(c[i] % 2 != 0)
            {
                cout << i;
            }
        }
    }
    return 0;
}