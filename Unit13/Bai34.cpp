#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[10]; int i = 0, count = 0;
    while(n != 0)
    {
        a[i++] = n % 10;
        n /= 10;
        count++;
    }
    for(int j = 0; j < count; j++)
    {
        if(a[j] < a[j + 1])
        {
            cout << 0;
            return 0;
        }
    }
    cout << 1;
}