#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int max = n % 10; 
    while(n != 0)
    {
        int temp = n % 10;
        if(temp > max)
        {
            max = temp;
        }
        n /= 10;
    }
    cout << max;
}